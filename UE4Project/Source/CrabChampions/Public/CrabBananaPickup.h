#pragma once
#include "CoreMinimal.h"
#include "CrabOverlapPickup.h"
#include "CrabBananaPickup.generated.h"

UCLASS(Blueprintable)
class CRABCHAMPIONS_API ACrabBananaPickup : public ACrabOverlapPickup {
    GENERATED_BODY()
public:
    ACrabBananaPickup(const FObjectInitializer& ObjectInitializer);

};

