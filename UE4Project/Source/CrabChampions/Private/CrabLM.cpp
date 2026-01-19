#include "CrabLM.h"
#include "Net/UnrealNetwork.h"




ACrabLM::ACrabLM(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}


void ACrabLM::OnRep_LightingPresetIndex() {
}

void ACrabLM::MulticastSpawnCosmeticProjectile_Implementation(const FCrabProjectileInfo& ProjectileInfo, AActor* ProjectileOwner, const FVector_NetQuantize& StartLoc) {
}

void ACrabLM::MulticastPlayOneShotFX_Implementation(UNiagaraSystem* FXToPlay, USoundCue* SoundToPlay, const FVector& SpawnLoc) {
}

void ACrabLM::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ACrabLM, LightingPresetIndex);
}


