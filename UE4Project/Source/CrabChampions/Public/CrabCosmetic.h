#pragma once
#include "CoreMinimal.h"
#include "ECrabCosmeticType.h"
#include "CrabCosmetic.generated.h"

class UObject;
class UTexture2D;

USTRUCT(BlueprintType)
struct FCrabCosmetic {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECrabCosmeticType CosmeticType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString CosmeticName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* CosmeticIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* CosmeticObject;
    
    CRABCHAMPIONS_API FCrabCosmetic();
};

