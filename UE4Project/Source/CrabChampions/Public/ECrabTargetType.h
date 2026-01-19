#pragma once
#include "CoreMinimal.h"
#include "ECrabTargetType.generated.h"

UENUM(BlueprintType)
enum class ECrabTargetType : uint8 {
    None,
    Up,
    CurrentLoc,
    PredictedLoc,
    TelegraphedLoc,
};

