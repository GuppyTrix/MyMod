#pragma once
#include "CoreMinimal.h"
#include "ECrabProjectileState.generated.h"

UENUM(BlueprintType)
enum class ECrabProjectileState : uint8 {
    None,
    Pooled,
    Active,
    Exploded,
};

