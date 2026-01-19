#pragma once
#include "CoreMinimal.h"
#include "ECrabBiome.generated.h"

UENUM(BlueprintType)
enum class ECrabBiome : uint8 {
    None,
    Tropical,
    Arctic,
    Desert,
    Volcanic,
};

