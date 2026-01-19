
print("[itemiser] Loaded!")

---@type boolean
local foundWeaponMods = false;
---@type boolean
local foundPerks = false;

---@return UCrabWeaponModDA[]
function GetAllCWMDA()
    local found = FindAllOf("CrabWeaponModDA");

    ---@type UCrabWeaponModDA[]
    local CWMDA = found or {}
    print("[itemiser] found " .. #CWMDA .. " weapon mods");
    return CWMDA;
end

---@return UCrabPerkDA[]
function GetAllCPDA()
    local found = FindAllOf("CrabPerkDA");

    ---@type UCrabPerkDA[]
    local CPDA = found or {}

    print("[itemiser] found " .. #CPDA .. " perks");
    return CPDA;
end

---@type UCrabWeaponModDA[] 
CWMDA = {};
---@type UCrabPerkDA[]
CPDA = {};

function GetAllModData()
    if not foundWeaponMods then
        CWMDA = GetAllCWMDA();
        foundWeaponMods = true;
    end
    if not foundPerks then
        CPDA = GetAllCPDA();
        foundPerks = true;
    end
end

---@param Player ACrabPS
function RandomiseWMD(Player)
    print("[itemiser] randomising weapon mods for a player");
    
    ---@param PFmod RemoteUnrealParam<FCrabWeaponMod>
    Player.WeaponMods:ForEach(function(index, PFmod)
        ---@type FCrabWeaponMod
        local FMod = PFmod:get();
        FMod.WeaponModDA = CWMDA[math.random(1, #CWMDA)];
    end)

    print("[itemiser] randomising perks for a player");
    ---@param PFperk RemoteUnrealParam<FCrabPerk>
    Player.Perks:ForEach(function(index, PFperk)
        ---@type FCrabPerk
        local FPerk = PFperk:get();
        FPerk.PerkDA = CPDA[math.random(1, #CPDA)];
    end)
end

---@param CRAB ACrabPC
---@param nim any
function ModifyPlayerData(CRAB, nim)
    print("[itemiser] player went through portal!")

    GetAllModData();
    local found = FindAllOf("CrabPS");

    ---@type ACrabPS[]
    local CrabPS = found or {}
    
    ---@param c ACrabPS
    for i, c in ipairs(CrabPS) do
        print(string.format("[itemiser] randomising player %s", i));
        RandomiseWMD(c);
    end
end


RegisterHook("/Script/CrabChampions.CrabPC:ClientOnEnteredPortal", ModifyPlayerData);