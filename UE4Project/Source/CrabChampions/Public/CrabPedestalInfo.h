#pragma once
#include "CoreMinimal.h"
#include "ECrabCurrencyType.h"
#include "CrabPedestalInfo.generated.h"

USTRUCT(BlueprintType)
struct FCrabPedestalInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECrabCurrencyType CurrencyType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Cost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DiscountPercentage;
    
    CRABCHAMPIONS_API FCrabPedestalInfo();
};

