#include "CrabPS.h"
#include "Net/UnrealNetwork.h"




ACrabPS::ACrabPS(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}


void ACrabPS::ServerSetWeaponDA_Implementation(UCrabWeaponDA* NewWeaponDA) {
}

void ACrabPS::ServerSetMeleeDA_Implementation(UCrabMeleeDA* NewMeleeDA) {
}

void ACrabPS::ServerSetAbilityDA_Implementation(UCrabAbilityDA* NewAbilityDA) {
}

void ACrabPS::ServerRemoveWeaponMod_Implementation(ECrabWeaponModType WeaponModType) {
}

void ACrabPS::ServerRemoveRelic_Implementation(ECrabRelicType RelicType) {
}

void ACrabPS::ServerRemovePerk_Implementation(ECrabPerkType PerkType) {
}

void ACrabPS::ServerRemoveMeleeMod_Implementation(ECrabMeleeModType MeleeModType) {
}

void ACrabPS::ServerRemoveAbilityMod_Implementation(ECrabAbilityModType AbilityModType) {
}

void ACrabPS::ServerRefreshAccount_Implementation(ECrabRank NewAccountRank, int32 NewAccountLevel, int32 NewKeys) {
}

void ACrabPS::ServerIncrementNumInventorySlots_Implementation(ECrabPickupType PickupType, int32 Cost) {
}

void ACrabPS::ServerEquipInventory_Implementation(UCrabWeaponDA* NewWeaponDA, UCrabAbilityDA* NewAbilityDA, UCrabMeleeDA* NewMeleeDA) {
}

void ACrabPS::ServerEquipCosmetics_Implementation(UMaterialInterface* NewCrabSkin) {
}

void ACrabPS::OnRep_WeaponDA() {
}

void ACrabPS::OnRep_ScaleMultiplier() {
}

void ACrabPS::OnRep_MeleeDA() {
}

void ACrabPS::OnRep_Keys() {
}

void ACrabPS::OnRep_IslandRewardRarity() {
}

void ACrabPS::OnRep_Inventory() {
}

void ACrabPS::OnRep_Eliminations() {
}

void ACrabPS::OnRep_DamageTakenOnThisIsland() {
}

void ACrabPS::OnRep_Crystals() {
}

void ACrabPS::OnRep_Combo() {
}

void ACrabPS::OnRep_AccountRank() {
}

void ACrabPS::OnRep_AccountLevel() {
}

void ACrabPS::OnRep_AbilityDA() {
}

void ACrabPS::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ACrabPS, PlayerTintType);
    DOREPLIFETIME(ACrabPS, ComboCounter);
    DOREPLIFETIME(ACrabPS, Combo);
    DOREPLIFETIME(ACrabPS, Eliminations);
    DOREPLIFETIME(ACrabPS, DamageDealt);
    DOREPLIFETIME(ACrabPS, HighestDamageDealt);
    DOREPLIFETIME(ACrabPS, DamageTaken);
    DOREPLIFETIME(ACrabPS, DamageTakenOnThisIsland);
    DOREPLIFETIME(ACrabPS, NumFlawlessIslands);
    DOREPLIFETIME(ACrabPS, HealthInfo);
    DOREPLIFETIME(ACrabPS, BaseMaxHealth);
    DOREPLIFETIME(ACrabPS, MaxHealthMultiplier);
    DOREPLIFETIME(ACrabPS, DamageMultiplier);
    DOREPLIFETIME(ACrabPS, ScaleMultiplier);
    DOREPLIFETIME(ACrabPS, AccountRank);
    DOREPLIFETIME(ACrabPS, AccountLevel);
    DOREPLIFETIME(ACrabPS, Keys);
    DOREPLIFETIME(ACrabPS, WeaponDA);
    DOREPLIFETIME(ACrabPS, AbilityDA);
    DOREPLIFETIME(ACrabPS, MeleeDA);
    DOREPLIFETIME(ACrabPS, NumWeaponModSlots);
    DOREPLIFETIME(ACrabPS, WeaponMods);
    DOREPLIFETIME(ACrabPS, NumAbilityModSlots);
    DOREPLIFETIME(ACrabPS, AbilityMods);
    DOREPLIFETIME(ACrabPS, NumMeleeModSlots);
    DOREPLIFETIME(ACrabPS, MeleeMods);
    DOREPLIFETIME(ACrabPS, NumPerkSlots);
    DOREPLIFETIME(ACrabPS, Perks);
    DOREPLIFETIME(ACrabPS, Relics);
    DOREPLIFETIME(ACrabPS, NumTimesSalvaged);
    DOREPLIFETIME(ACrabPS, NumShopPurchases);
    DOREPLIFETIME(ACrabPS, NumShopRerolls);
    DOREPLIFETIME(ACrabPS, NumTotemsDestroyed);
    DOREPLIFETIME(ACrabPS, Crystals);
    DOREPLIFETIME(ACrabPS, IslandRewardRarity);
    DOREPLIFETIME(ACrabPS, ChosenAnvils);
    DOREPLIFETIME(ACrabPS, TotalTimeTaken);
}


