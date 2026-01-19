#include "CrabEnemyC.h"
#include "Net/UnrealNetwork.h"




ACrabEnemyC::ACrabEnemyC(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}


void ACrabEnemyC::OnRep_EnemyBuff() {
}

void ACrabEnemyC::OnRep_CurrentDamageReduction() {
}

void ACrabEnemyC::OnRep_CurrentActionIndex() {
}

void ACrabEnemyC::MulticastSpawnShrapnelProjectiles_Implementation() {
}

void ACrabEnemyC::MulticastSpawnMirroredProjectile_Implementation(ACrabC* DamagingC) {
}

void ACrabEnemyC::MulticastSpawnHomingThornProjectiles_Implementation() {
}

void ACrabEnemyC::MulticastShowHealthBar_Implementation() {
}

void ACrabEnemyC::MulticastHitReact_Implementation() {
}

void ACrabEnemyC::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ACrabEnemyC, CurrentDamageReduction);
    DOREPLIFETIME(ACrabEnemyC, EnemyBuff);
    DOREPLIFETIME(ACrabEnemyC, BestEnemyC);
    DOREPLIFETIME(ACrabEnemyC, CurrentActionIndex);
}


