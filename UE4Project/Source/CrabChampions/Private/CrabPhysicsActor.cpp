#include "CrabPhysicsActor.h"
#include "Net/UnrealNetwork.h"




ACrabPhysicsActor::ACrabPhysicsActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}


void ACrabPhysicsActor::OnRep_IsExploded() {
}

void ACrabPhysicsActor::OnComponentHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit) {
}

void ACrabPhysicsActor::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ACrabPhysicsActor, bIsExploded);
}


