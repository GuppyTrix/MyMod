#pragma once
#include "CoreMinimal.h"
#include "ECrabHitmarkerType.generated.h"

UENUM(BlueprintType)
enum class ECrabHitmarkerType : uint8 {
    Quiet,
    Normal,
    Loud,
};

