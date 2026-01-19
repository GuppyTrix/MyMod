#pragma once
#include "CoreMinimal.h"
#include "ECrabConsumableType.generated.h"

UENUM(BlueprintType)
enum class ECrabConsumableType : uint8 {
    None,
    Armor,
    Crystal,
    Key,
};

