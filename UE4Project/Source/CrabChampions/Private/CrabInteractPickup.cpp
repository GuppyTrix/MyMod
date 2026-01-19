#include "CrabInteractPickup.h"
#include "Net/UnrealNetwork.h"




ACrabInteractPickup::ACrabInteractPickup(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}


void ACrabInteractPickup::OnRep_PickupInfo() {
}

void ACrabInteractPickup::OnRep_NumTimesPickedUp() {
}

void ACrabInteractPickup::OnRep_IsPickupDeactivated() {
}

void ACrabInteractPickup::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ACrabInteractPickup, PickupInfo);
    DOREPLIFETIME(ACrabInteractPickup, NumTimesPickedUp);
    DOREPLIFETIME(ACrabInteractPickup, bIsPickupDeactivated);
}


