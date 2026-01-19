#pragma once
#include "CoreMinimal.h"
#include "ECrabInputDir.generated.h"

UENUM(BlueprintType)
enum class ECrabInputDir : uint8 {
    None,
    Forward,
    Backward,
    Right,
    Left,
};

