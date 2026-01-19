#pragma once
#include "CoreMinimal.h"
#include "ECrabRarity.generated.h"

UENUM(BlueprintType)
enum class ECrabRarity : uint8 {
    None,
    Common,
    Epic,
    Legendary,
    Greed,
};

