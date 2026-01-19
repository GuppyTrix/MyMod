#include "CrabWeapon.h"
#include "Net/UnrealNetwork.h"




ACrabWeapon::ACrabWeapon(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}


void ACrabWeapon::ServerTriggerOnReloadWeaponMods_Implementation() {
}

void ACrabWeapon::ServerSetIsReloading_Implementation(bool bNewIsReloading) {
}

void ACrabWeapon::ServerPlayStartFireFX_Implementation() {
}

void ACrabWeapon::OnRep_WeaponInfo() {
}

void ACrabWeapon::OnRep_TimesFired() {
}

void ACrabWeapon::OnRep_OwningPS() {
}

void ACrabWeapon::OnRep_IsReloading() {
}

void ACrabWeapon::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ACrabWeapon, OwningPS);
    DOREPLIFETIME(ACrabWeapon, WeaponInfo);
    DOREPLIFETIME(ACrabWeapon, TimesFired);
    DOREPLIFETIME(ACrabWeapon, bIsReloading);
}


