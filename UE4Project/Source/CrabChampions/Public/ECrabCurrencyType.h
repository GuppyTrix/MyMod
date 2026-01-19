#pragma once
#include "CoreMinimal.h"
#include "ECrabCurrencyType.generated.h"

UENUM(BlueprintType)
enum class ECrabCurrencyType : uint8 {
    Crystal,
    Key,
    Health,
    MaxHealth,
};

