#include "CrabStrike.h"
#include "Net/UnrealNetwork.h"




ACrabStrike::ACrabStrike(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}


void ACrabStrike::OnRep_StrikeInfo() {
}

void ACrabStrike::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ACrabStrike, StrikeInfo);
}


