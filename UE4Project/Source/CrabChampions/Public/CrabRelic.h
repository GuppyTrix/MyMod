#pragma once
#include "CoreMinimal.h"
#include "CrabInventoryInfo.h"
#include "CrabRelic.generated.h"

class UCrabRelicDA;

USTRUCT(BlueprintType)
struct FCrabRelic {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCrabRelicDA* RelicDA;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCrabInventoryInfo InventoryInfo;
    
    CRABCHAMPIONS_API FCrabRelic();
};

