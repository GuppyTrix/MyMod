#pragma once
#include "CoreMinimal.h"
#include "CrabInventoryInfo.h"
#include "CrabMeleeMod.generated.h"

class UCrabMeleeModDA;

USTRUCT(BlueprintType)
struct FCrabMeleeMod {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCrabMeleeModDA* MeleeModDA;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCrabInventoryInfo InventoryInfo;
    
    CRABCHAMPIONS_API FCrabMeleeMod();
};

