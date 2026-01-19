#include "CrabCrystalPickup.h"
#include "Net/UnrealNetwork.h"




ACrabCrystalPickup::ACrabCrystalPickup(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}


void ACrabCrystalPickup::OnRep_CrystalDropType() {
}

void ACrabCrystalPickup::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ACrabCrystalPickup, CrystalDropType);
}


