#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "CrabCosmetic.h"
#include "CrabCosmeticsDA.generated.h"

UCLASS(Blueprintable)
class CRABCHAMPIONS_API UCrabCosmeticsDA : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCrabCosmetic> CrabSkins;
    
    UCrabCosmeticsDA();

};

