#include "CrabOverlapPickup.h"
#include "Net/UnrealNetwork.h"




ACrabOverlapPickup::ACrabOverlapPickup(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}


void ACrabOverlapPickup::OnRep_PickedUpByC() {
}

void ACrabOverlapPickup::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ACrabOverlapPickup, PickedUpByC);
}


