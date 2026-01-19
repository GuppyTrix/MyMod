#include "CrabC.h"
#include "Net/UnrealNetwork.h"




// Minimal constructor - no component setup needed for dummy classes
ACrabC::ACrabC(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}


// Empty implementations - just enough to compile
void ACrabC::ServerSpawnCosmeticProjectile_Implementation(const FCrabProjectileInfo& ProjectileInfo, AActor* ProjectileOwner, const FVector_NetQuantize& StartLoc) {
}

void ACrabC::ServerClientAuthoritativeMove_Implementation(const FClientAuthoritativeMoveData& MoveData) {
}

void ACrabC::OnRep_IsInvulnerable() {
}

void ACrabC::OnRep_IsEliminated() {
}

void ACrabC::OnRep_DebuffState(const FCrabDebuffState& PreviousDebuffState) {
}

void ACrabC::OnRep_ChainedToC() {
}

void ACrabC::ClientKnockback_Implementation(const FVector_NetQuantizeNormal& Dir, float Strength) {
}

void ACrabC::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ACrabC, Weapons);
    DOREPLIFETIME(ACrabC, CurrentViewPitch);
    DOREPLIFETIME(ACrabC, bIsKnockedBack);
    DOREPLIFETIME(ACrabC, bIsEliminated);
    DOREPLIFETIME(ACrabC, DebuffState);
    DOREPLIFETIME(ACrabC, ChainedToC);
    DOREPLIFETIME(ACrabC, bIsInvulnerable);
}