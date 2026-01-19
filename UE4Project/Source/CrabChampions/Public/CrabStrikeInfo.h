#pragma once
#include "CoreMinimal.h"
#include "CrabStrikeInfo.generated.h"

class ACrabC;

USTRUCT(BlueprintType)
struct FCrabStrikeInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ACrabC* OwningC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RadiusMultiplier;
    
    CRABCHAMPIONS_API FCrabStrikeInfo();
};

