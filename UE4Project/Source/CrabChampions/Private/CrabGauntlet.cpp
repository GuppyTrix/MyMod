#include "CrabGauntlet.h"
#include "Net/UnrealNetwork.h"




ACrabGauntlet::ACrabGauntlet(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}


void ACrabGauntlet::OnRep_GauntletInfo() {
}

void ACrabGauntlet::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ACrabGauntlet, GauntletInfo);
}


