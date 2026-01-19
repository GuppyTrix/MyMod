#include "CrabPortal.h"
#include "Net/UnrealNetwork.h"




ACrabPortal::ACrabPortal(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}


void ACrabPortal::OnRep_PortalInfo() {
}

void ACrabPortal::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ACrabPortal, PortalInfo);
}


