#pragma once
#include "CoreMinimal.h"
#include "ECrabBlessing.h"
#include "ECrabChallengeModifier.h"
#include "ECrabLootPool.h"
#include "CrabPortalInfo.generated.h"

USTRUCT(BlueprintType)
struct FCrabPortalInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsInited;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ECrabChallengeModifier> ChallengeModifiers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECrabBlessing Blessing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECrabLootPool RewardLootPool;
    
    CRABCHAMPIONS_API FCrabPortalInfo();
};

