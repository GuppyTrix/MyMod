#pragma once
#include "CoreMinimal.h"
#include "ECrabBlessing.generated.h"

UENUM(BlueprintType)
enum class ECrabBlessing : uint8 {
    None,
    Flawless,
    Rush,
    KnivesOut,
    Harvest,
    Last,
};

