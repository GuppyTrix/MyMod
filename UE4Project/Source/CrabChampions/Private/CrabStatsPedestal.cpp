#include "CrabStatsPedestal.h"
#include "Net/UnrealNetwork.h"




ACrabStatsPedestal::ACrabStatsPedestal(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}


void ACrabStatsPedestal::OnRep_LobbyStats() {
}

void ACrabStatsPedestal::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ACrabStatsPedestal, LobbyStats);
}


