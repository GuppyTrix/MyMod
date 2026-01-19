local UEHelpers = require("UEHelpers")

local originalLevelDescriptions = {}
local lastChanceByMod = {}
local CHANCE_COLOR_TAG = "Green"
local TRIGGER_CHANCE_TYPE = {
	NotChanceBased = 0,
	FullScalingTriggerChance = 1,
	HalfScalingTriggerChance = 2,
}

local function ToLuaString(value)
	if type(value) == "userdata" and value.type and value: type() == "FString" then
		return value:ToString()
	end
	return tostring(value)
end

local function BuildChanceLine(formattedChance)
	if not CHANCE_COLOR_TAG or CHANCE_COLOR_TAG == "" then
		return string.format("Chance: %s%%", formattedChance)
	end
	return string.format("<%s>Chance: %s%%</>", CHANCE_COLOR_TAG, formattedChance)
end

local function GetLocalPlayerState()
	local ok, pc = pcall(UEHelpers.GetPlayerController)
	if ok and pc and pc:IsValid() and pc.PlayerState and pc.PlayerState:IsValid() then
		print("[Testing] Using PlayerController.PlayerState")
		return pc.PlayerState
	end
	local playerStates = FindAllOf("CrabPS") or {}
	for _, ps in ipairs(playerStates) do
		if ps:IsValid() then
			print("[Testing] Using first valid CrabPS")
			return ps
		end
	end
	return nil
end

local function GetScaledBuff(modDA, modInfo)
	local baseBuff = modDA.BaseBuff or 0
	local level = modInfo and modInfo.Level or 1
	local accumulated = modInfo and modInfo.AccumulatedBuff or 0

	if modDA.bHyperbolicBuff and accumulated ~= 0 then
		return accumulated
	end

	if level and level > 1 then
		return baseBuff * level
	end

	if accumulated ~= 0 then
		return accumulated
	end

	return baseBuff
end

local function BuildWeaponModTotals(playerPS)
	local totalBuffByType = {}
	local countByType = {}
	local diceShotBonus = 0
	if not playerPS or not playerPS:IsValid() or not playerPS.WeaponMods then
		return totalBuffByType, countByType, diceShotBonus
	end
	playerPS.WeaponMods:ForEach(function(_, PFmod)
		local mod = PFmod:get()
		if not mod or not mod.WeaponModDA or not mod.WeaponModDA:IsValid() then
			return
		end
		local modDA = mod.WeaponModDA
		local modType = modDA.WeaponModType
		local buff = GetScaledBuff(modDA, mod.InventoryInfo)
		local level = mod.InventoryInfo and mod.InventoryInfo.Level or 1
		totalBuffByType[modType] = (totalBuffByType[modType] or 0) + buff
		countByType[modType] = (countByType[modType] or 0) + level
		local modName = ToLuaString(modDA.Name)
		if modName and string.find(string.lower(modName), "dice shot", 1, true) then
			diceShotBonus = diceShotBonus + buff
		end
	end)
	return totalBuffByType, countByType, diceShotBonus
end

local function ComputeChancePercent(modDA, modInfo, weaponDA, diceShotBonus, totalBuff)
	if not modDA or not modDA:IsValid() then
		return nil
	end
	local triggerChanceType = modDA.TriggerChanceType
	print(string.format("[Testing] TriggerChanceType=%s for %s", tostring(triggerChanceType), ToLuaString(modDA.Name)))
	if triggerChanceType == TRIGGER_CHANCE_TYPE.NotChanceBased then
		return nil
	end
	local baseBuff = totalBuff and totalBuff ~= 0 and totalBuff or GetScaledBuff(modDA, modInfo)
	print(string.format("[Testing] BaseBuff=%s (AccumulatedBuff=%s, Level=%s) for %s", tostring(baseBuff), tostring(modInfo and modInfo.AccumulatedBuff), tostring(modInfo and modInfo.Level), ToLuaString(modDA.Name)))
	if triggerChanceType == TRIGGER_CHANCE_TYPE.HalfScalingTriggerChance then
		baseBuff = baseBuff * 0.5
	end
	local weaponMultiplier = 1
	if weaponDA and weaponDA:IsValid() and weaponDA.WeaponModTriggerRollMultiplier then
		weaponMultiplier = weaponDA.WeaponModTriggerRollMultiplier
	end
	print(string.format("[Testing] WeaponModTriggerRollMultiplier=%s", tostring(weaponMultiplier)))
	local diceMultiplier = 1 + (diceShotBonus or 0) / 100
	print(string.format("[Testing] DiceShotBonus=%s => Multiplier=%s", tostring(diceShotBonus or 0), tostring(diceMultiplier)))
	return baseBuff * weaponMultiplier * diceMultiplier
end

local function UpdateWeaponModChanceText()
	local playerPS = GetLocalPlayerState()
	if not playerPS or not playerPS:IsValid() then
		print("[Testing] No valid PlayerState yet")
		return
	end
	local weaponDA = playerPS.WeaponDA
	print(string.format("[Testing] WeaponDA=%s", tostring(weaponDA and weaponDA:GetFullName() or "nil")))
	local totalBuffByType, countByType, diceShotBonus = BuildWeaponModTotals(playerPS)
	print(string.format("[Testing] Dice Shot Bonus=%s", tostring(diceShotBonus)))

	if not playerPS.WeaponMods then
		return
	end

	playerPS.WeaponMods:ForEach(function(_, PFmod)
		local mod = PFmod:get()
		if not mod or not mod.WeaponModDA or not mod.WeaponModDA:IsValid() then
			print("[Testing] Skipping invalid weapon mod entry")
			return
		end

		local modDA = mod.WeaponModDA
		local modKey = modDA:GetFullName()
		local modType = modDA.WeaponModType
		local totalBuff = totalBuffByType[modType]
		local modCount = countByType[modType] or 1
		print(string.format("[Testing] Stacks for %s: %d (total buff=%s)", ToLuaString(modDA.Name), modCount, tostring(totalBuff)))
		local originalLevel = originalLevelDescriptions[modKey]
		if not originalLevel then
			originalLevel = ToLuaString(modDA.LevelDescription)
			originalLevelDescriptions[modKey] = originalLevel
		end

		local chancePercent = ComputeChancePercent(modDA, mod.InventoryInfo, weaponDA, diceShotBonus, totalBuff)
		if not chancePercent then
			print(string.format("[Testing] Not chance-based: %s", ToLuaString(modDA.Name)))
			if lastChanceByMod[modKey] ~= false then
				modDA.LevelDescription = originalLevel
				lastChanceByMod[modKey] = false
			end
			return
		end

		local clampedChance = math.max(0, math.min(chancePercent, 100))
		local formattedChance = string.format("%.1f", clampedChance)
		local chanceLine = BuildChanceLine(formattedChance)
		local newText = originalLevel ~= "" and string.format("%s\n%s", originalLevel, chanceLine) or chanceLine
		if lastChanceByMod[modKey] ~= formattedChance then
			print(string.format("[Testing] Updating %s chance to %s%%", ToLuaString(modDA.Name), formattedChance))
			modDA.LevelDescription = newText
			lastChanceByMod[modKey] = formattedChance
		end
	end)
end

RegisterHook("/Script/CrabChampions.CrabPS:ServerEquipInventory", function()
	UpdateWeaponModChanceText()
end)

RegisterHook("/Script/CrabChampions.CrabPC:ClientOnPickedUpPickup", function(_, PickupDA)
	local triggerChanceType = PickupDA.TriggerChanceType
	if triggerChanceType == TRIGGER_CHANCE_TYPE.NotChanceBased then
		return
	end

	print("[Testing] Chance-based pickup detected; recalculating.")
	UpdateWeaponModChanceText()
end)

RegisterHook("/Script/CrabChampions.CrabPC:ClientOnEnteredPortal", function()
	print("[Testing] Entered portal; recalculating.")
	UpdateWeaponModChanceText()
end)
