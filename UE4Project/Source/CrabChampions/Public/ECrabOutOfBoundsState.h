#pragma once
#include "CoreMinimal.h"
#include "ECrabOutOfBoundsState.generated.h"

UENUM(BlueprintType)
enum class ECrabOutOfBoundsState : uint8 {
    InBounds,
    OutOfXYBounds,
    OutOfZBounds,
};

