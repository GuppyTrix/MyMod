#include "CrabTurret.h"
#include "Net/UnrealNetwork.h"




ACrabTurret::ACrabTurret(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}


void ACrabTurret::OnRep_OwningC() {
}

void ACrabTurret::OnRep_IsExploded() {
}

void ACrabTurret::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ACrabTurret, OwningC);
    DOREPLIFETIME(ACrabTurret, BestEnemyC);
    DOREPLIFETIME(ACrabTurret, bIsExploded);
}


