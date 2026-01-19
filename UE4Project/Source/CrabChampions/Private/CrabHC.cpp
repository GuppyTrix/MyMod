#include "CrabHC.h"
#include "Net/UnrealNetwork.h"




UCrabHC::UCrabHC(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}


void UCrabHC::OnRep_HealthInfo() {
}

void UCrabHC::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UCrabHC, HealthInfo);
}


