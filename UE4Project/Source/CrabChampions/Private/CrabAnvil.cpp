#include "CrabAnvil.h"
#include "Net/UnrealNetwork.h"




ACrabAnvil::ACrabAnvil(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}


void ACrabAnvil::OnRep_OwningPS() {
}

void ACrabAnvil::OnRep_EnhancementType() {
}

void ACrabAnvil::MulticastApplyEnhancement_Implementation() {
}

void ACrabAnvil::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ACrabAnvil, EnhancementType);
    DOREPLIFETIME(ACrabAnvil, OwningPS);
}


