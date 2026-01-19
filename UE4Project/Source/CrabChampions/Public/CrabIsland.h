#pragma once
#include "CoreMinimal.h"
#include "CrabIsland.generated.h"

USTRUCT(BlueprintType)
struct FCrabIsland {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName IslandName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpawnWeight;
    
    CRABCHAMPIONS_API FCrabIsland();
};

