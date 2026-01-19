#include "CrabDamageArea.h"
#include "Net/UnrealNetwork.h"




ACrabDamageArea::ACrabDamageArea(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}


void ACrabDamageArea::OnRep_RadiusMultiplier() {
}

void ACrabDamageArea::MulticastDeactivateDamageArea_Implementation() {
}

void ACrabDamageArea::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ACrabDamageArea, RadiusMultiplier);
    DOREPLIFETIME(ACrabDamageArea, OwningC);
}


