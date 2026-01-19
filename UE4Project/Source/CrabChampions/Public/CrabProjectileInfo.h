#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "ECrabLesserProjectileType.h"
#include "CrabProjectileInfo.generated.h"

class AActor;
class ACrabC;
class UCrabProjectileDA;

USTRUCT(BlueprintType)
struct FCrabProjectileInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCrabProjectileDA* ProjectileDA;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector_NetQuantize100 Dir;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ACrabC* OwningC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECrabLesserProjectileType LesserProjectileType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsParentLesserProjectile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* ActorToTempMoveIgnore;
    
    CRABCHAMPIONS_API FCrabProjectileInfo();
};

