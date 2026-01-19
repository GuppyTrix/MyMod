#pragma once
#include "CoreMinimal.h"
#include "GameFramework/MovementComponent.h"
#include "CrabPMC.generated.h"

class ACrabC;
class ACrabProjectile;
class UCrabProjectileDA;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class CRABCHAMPIONS_API UCrabPMC : public UMovementComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ACrabC* HomingTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UCrabProjectileDA* ProjectileDA;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ACrabProjectile* OwningProjectile;
    
public:
    UCrabPMC(const FObjectInitializer& ObjectInitializer);

};

