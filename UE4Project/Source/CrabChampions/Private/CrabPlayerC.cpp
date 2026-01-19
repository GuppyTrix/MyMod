#include "CrabPlayerC.h"
#include "Net/UnrealNetwork.h"




ACrabPlayerC::ACrabPlayerC(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}


void ACrabPlayerC::ServerUpgradeTotemPurchase_Implementation(int32 UpgradeCost, UCrabInventoryDA* InventoryDA) {
}

void ACrabPlayerC::ServerStopSlide_Implementation() {
}

void ACrabPlayerC::ServerStopAim_Implementation() {
}

void ACrabPlayerC::ServerStartSlide_Implementation() {
}

void ACrabPlayerC::ServerStartAim_Implementation() {
}

void ACrabPlayerC::ServerSetActiveInteractable_Implementation(ACrabInteractable* NewActiveInteractable) {
}

void ACrabPlayerC::ServerSalvage_Implementation(ACrabInteractPickup* PickupToSalvage) {
}

void ACrabPlayerC::ServerPing_Implementation(const FVector_NetQuantize& InPingLoc) {
}

void ACrabPlayerC::ServerMelee_Implementation() {
}

void ACrabPlayerC::ServerInteract_Implementation(ACrabInteractable* ActorToInteractWith) {
}

void ACrabPlayerC::ServerFlip_Implementation(ECrabInputDir FlipDir) {
}

void ACrabPlayerC::ServerDropPickup_Implementation(UCrabPickupDA* PickupDA, const FCrabInventoryInfo& InventoryInfo) {
}

void ACrabPlayerC::ServerDealFallDamage_Implementation() {
}

void ACrabPlayerC::ServerDealDamage_Implementation(const TArray<FCrabDamageInfo>& DamageInfoArray) {
}

void ACrabPlayerC::ServerDash_Implementation(ECrabInputDir DashDir) {
}

void ACrabPlayerC::ServerAutoLoot_Implementation() {
}

void ACrabPlayerC::ServerApplyEnhancement_Implementation(UCrabInventoryDA* InventoryDA) {
}

void ACrabPlayerC::ServerAbility_Implementation(const FVector_NetQuantize& InAbilityTelegraphLoc) {
}

void ACrabPlayerC::OnRep_SlideDamageIteration() {
}

void ACrabPlayerC::OnRep_PingLoc(FVector_NetQuantize PreviousPingLoc) {
}

void ACrabPlayerC::OnRep_PendingHealthToHeal() {
}

void ACrabPlayerC::OnRep_MeleeDA() {
}

void ACrabPlayerC::OnRep_IsSliding() {
}

void ACrabPlayerC::OnRep_IsBananaActive() {
}

void ACrabPlayerC::OnRep_IsAiming() {
}

void ACrabPlayerC::OnRep_CrabSkin() {
}

void ACrabPlayerC::OnRep_ActiveInteractable() {
}

void ACrabPlayerC::OnRep_AbilityDA() {
}

void ACrabPlayerC::MulticastSonicBoomFX_Implementation() {
}

void ACrabPlayerC::MulticastShockwaveFX_Implementation() {
}

void ACrabPlayerC::MulticastMelee_Implementation() {
}

void ACrabPlayerC::MulticastInteract_Implementation() {
}

void ACrabPlayerC::MulticastHideStalePing_Implementation() {
}

void ACrabPlayerC::MulticastFlip_Implementation(ECrabInputDir FlipDir) {
}

void ACrabPlayerC::MulticastDash_Implementation(ECrabInputDir DashDir) {
}

void ACrabPlayerC::MulticastAbility_Implementation(const FVector_NetQuantize& InAbilityTelegraphLoc) {
}

void ACrabPlayerC::ClientTeleport_Implementation(const FVector_NetQuantize& Loc, float Yaw) {
}

void ACrabPlayerC::ClientPrePortal_Implementation(ACrabPortal* Portal) {
}

void ACrabPlayerC::ClientPostPortal_Implementation() {
}

void ACrabPlayerC::ClientOnTriggeredRingOfDestruction_Implementation() {
}

void ACrabPlayerC::ClientOnBlockedDamage_Implementation() {
}

void ACrabPlayerC::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ACrabPlayerC, bIsBananaActive);
    DOREPLIFETIME(ACrabPlayerC, AbilityDA);
    DOREPLIFETIME(ACrabPlayerC, MeleeDA);
    DOREPLIFETIME(ACrabPlayerC, CrabSkin);
    DOREPLIFETIME(ACrabPlayerC, PendingHealthToHeal);
    DOREPLIFETIME(ACrabPlayerC, bIsSliding);
    DOREPLIFETIME(ACrabPlayerC, SlideDamageIteration);
    DOREPLIFETIME(ACrabPlayerC, bIsAiming);
    DOREPLIFETIME(ACrabPlayerC, PingLoc);
    DOREPLIFETIME(ACrabPlayerC, ActiveInteractable);
}


