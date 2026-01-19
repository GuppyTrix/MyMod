#pragma once
#include "CoreMinimal.h"
#include "ECrabTintType.generated.h"

UENUM(BlueprintType)
enum class ECrabTintType : uint8 {
    None,
    Red,
    Orange,
    Yellow,
    Green,
    Blue,
    Purple,
    Last,
};

