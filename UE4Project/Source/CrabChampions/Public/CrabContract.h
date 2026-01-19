#pragma once
#include "CoreMinimal.h"
#include "ECrabContractType.h"
#include "CrabContract.generated.h"

USTRUCT(BlueprintType)
struct FCrabContract {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECrabContractType ContractType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Progress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Goal;
    
    CRABCHAMPIONS_API FCrabContract();
};

