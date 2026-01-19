#pragma once
#include "CoreMinimal.h"
#include "ECrabShotSpawnType.generated.h"

UENUM(BlueprintType)
enum class ECrabShotSpawnType : uint8 {
    Muzzle,
    AboveCrosshair,
};

