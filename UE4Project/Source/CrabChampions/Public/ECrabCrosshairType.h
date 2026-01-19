#pragma once
#include "CoreMinimal.h"
#include "ECrabCrosshairType.generated.h"

UENUM(BlueprintType)
enum class ECrabCrosshairType : uint8 {
    None,
    Cross,
    Circle,
    BrokenCircle,
    Dot,
    SniperScope,
};

