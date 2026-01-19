#include "CrabHealthPickup.h"
#include "Net/UnrealNetwork.h"




ACrabHealthPickup::ACrabHealthPickup(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}


void ACrabHealthPickup::OnRep_HealthToGive() {
}

void ACrabHealthPickup::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ACrabHealthPickup, HealthToGive);
}


