#pragma once
#include "CoreMinimal.h"
#include "ECrabEnhancementType.generated.h"

UENUM(BlueprintType)
enum class ECrabEnhancementType : uint8 {
    None,
    Bouncing,
    Accelerating,
    Zigging,
    Spiraling,
    Snaking,
    Returning,
    Orbiting,
    Chipping,
    Sticky,
    Growing,
    Freezing,
    Flaming,
    Electrifying,
    Toxifying,
    Arcanifying,
    Persisting,
    Doubling,
    Targeting,
    Damaging,
    Booming,
    Tripling,
    Splitting,
    Scattering,
    Expanding,
    Homing,
    Endangering,
    Random,
};

