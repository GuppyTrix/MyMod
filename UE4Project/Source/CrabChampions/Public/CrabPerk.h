#pragma once
#include "CoreMinimal.h"
#include "CrabInventoryInfo.h"
#include "CrabPerk.generated.h"

class UCrabPerkDA;

USTRUCT(BlueprintType)
struct FCrabPerk {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCrabPerkDA* PerkDA;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCrabInventoryInfo InventoryInfo;
    
    CRABCHAMPIONS_API FCrabPerk();
};

