#include "CrabDestructible.h"
#include "Net/UnrealNetwork.h"




ACrabDestructible::ACrabDestructible(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}


void ACrabDestructible::OnRep_ScaleMultiplier() {
}

void ACrabDestructible::OnRep_IsProximityExplosionTriggered() {
}

void ACrabDestructible::OnComponentHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit) {
}

void ACrabDestructible::MulticastExplode_Implementation(ACrabC* ExplodingC) {
}

void ACrabDestructible::MulticastAddLeak_Implementation(const FVector_NetQuantize& DamageLoc) {
}

void ACrabDestructible::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ACrabDestructible, ScaleMultiplier);
    DOREPLIFETIME(ACrabDestructible, bIsProximityExplosionTriggered);
}


