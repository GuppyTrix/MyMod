#pragma once
#include "CoreMinimal.h"
#include "ECrabEnhanceableType.generated.h"

UENUM(BlueprintType)
enum class ECrabEnhanceableType : uint8 {
    NotEnhanceable,
    Enhanceable,
    EnhanceableNonElemental,
    EnhanceableNonHoming,
};

