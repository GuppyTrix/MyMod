#include "CrabHarvestArea.h"
#include "Net/UnrealNetwork.h"




ACrabHarvestArea::ACrabHarvestArea(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}


void ACrabHarvestArea::OnRep_PlayerToRevive() {
}

void ACrabHarvestArea::MulticastOnHarvestAreaCleared_Implementation() {
}

void ACrabHarvestArea::MulticastOnCountdownUpdated_Implementation(uint8 PercentComplete) {
}

void ACrabHarvestArea::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ACrabHarvestArea, PlayerToRevive);
}


