#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ECrabSpawnPointType.h"
#include "CrabSpawnPoint.generated.h"

class USceneComponent;

UCLASS(Abstract, Blueprintable)
class CRABCHAMPIONS_API ACrabSpawnPoint : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* SpawnPointRoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECrabSpawnPointType SpawnPointType;
    
public:
    ACrabSpawnPoint(const FObjectInitializer& ObjectInitializer);

};

