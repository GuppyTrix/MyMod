#include "CrabTotem.h"
#include "Net/UnrealNetwork.h"




ACrabTotem::ACrabTotem(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}


void ACrabTotem::OnRep_NumDebuffs() {
}

void ACrabTotem::OnRep_NumBuffs() {
}

void ACrabTotem::OnRep_IsExploded() {
}

void ACrabTotem::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ACrabTotem, Cost);
    DOREPLIFETIME(ACrabTotem, UniqueIDInteractions);
    DOREPLIFETIME(ACrabTotem, NumBuffs);
    DOREPLIFETIME(ACrabTotem, NumDebuffs);
    DOREPLIFETIME(ACrabTotem, bIsExploded);
}


