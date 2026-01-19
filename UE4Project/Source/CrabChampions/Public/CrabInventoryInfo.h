#pragma once
#include "CoreMinimal.h"
#include "ECrabEnhancementType.h"
#include "CrabInventoryInfo.generated.h"

USTRUCT(BlueprintType)
struct FCrabInventoryInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 Level;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ECrabEnhancementType> Enhancements;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AccumulatedBuff;
    
    CRABCHAMPIONS_API FCrabInventoryInfo();
};

