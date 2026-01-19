#include "CrabTargetDummyC.h"
#include "Net/UnrealNetwork.h"




ACrabTargetDummyC::ACrabTargetDummyC(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}


void ACrabTargetDummyC::OnRep_DPS() {
}

void ACrabTargetDummyC::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ACrabTargetDummyC, DPS);
}


