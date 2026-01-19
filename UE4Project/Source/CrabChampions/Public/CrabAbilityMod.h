#pragma once
#include "CoreMinimal.h"
#include "CrabInventoryInfo.h"
#include "CrabAbilityMod.generated.h"

class UCrabAbilityModDA;

USTRUCT(BlueprintType)
struct FCrabAbilityMod {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCrabAbilityModDA* AbilityModDA;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCrabInventoryInfo InventoryInfo;
    
    CRABCHAMPIONS_API FCrabAbilityMod();
};

