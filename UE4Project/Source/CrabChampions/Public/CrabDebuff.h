#pragma once
#include "CoreMinimal.h"
#include "ECrabDebuffType.h"
#include "CrabDebuff.generated.h"

USTRUCT(BlueprintType)
struct FCrabDebuff {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECrabDebuffType DebuffType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DebuffStack;
    
    CRABCHAMPIONS_API FCrabDebuff();
};

