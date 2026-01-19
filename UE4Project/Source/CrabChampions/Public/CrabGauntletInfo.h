#pragma once
#include "CoreMinimal.h"
#include "ECrabChallengeModifier.h"
#include "ECrabGauntletReward.h"
#include "CrabGauntletInfo.generated.h"

USTRUCT(BlueprintType)
struct FCrabGauntletInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECrabChallengeModifier ChallengeModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECrabGauntletReward Reward;
    
    CRABCHAMPIONS_API FCrabGauntletInfo();
};

