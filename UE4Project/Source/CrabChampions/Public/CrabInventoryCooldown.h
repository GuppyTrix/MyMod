#pragma once
#include "CoreMinimal.h"
#include "CrabInventoryCooldown.generated.h"

class UCrabInventoryDA;

USTRUCT(BlueprintType)
struct FCrabInventoryCooldown {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCrabInventoryDA* InventoryDA;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 CurrentCooldown;
    
    CRABCHAMPIONS_API FCrabInventoryCooldown();
};

