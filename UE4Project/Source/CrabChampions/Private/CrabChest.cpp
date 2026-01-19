#include "CrabChest.h"
#include "Net/UnrealNetwork.h"




ACrabChest::ACrabChest(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}


void ACrabChest::OnRep_OwningPS() {
}

void ACrabChest::OnRep_IsChestOpened() {
}

void ACrabChest::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ACrabChest, OwningPS);
    DOREPLIFETIME(ACrabChest, bIsChestOpened);
}


