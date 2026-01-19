#pragma once
#include "CoreMinimal.h"
#include "ECrabBlockingHitState.generated.h"

UENUM(BlueprintType)
enum class ECrabBlockingHitState : uint8 {
    Deflected,
    Aborted,
};

