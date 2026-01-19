#pragma once
#include "CoreMinimal.h"
#include "ECrabTriggerChanceType.generated.h"

UENUM(BlueprintType)
enum class ECrabTriggerChanceType : uint8 {
    NotChanceBased,
    FullScalingTriggerChance,
    HalfScalingTriggerChance,
};

