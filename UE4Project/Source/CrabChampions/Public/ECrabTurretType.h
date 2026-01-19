#pragma once
#include "CoreMinimal.h"
#include "ECrabTurretType.generated.h"

UENUM(BlueprintType)
enum class ECrabTurretType : uint8 {
    None,
    Sentry,
    Sniper,
    Mortar,
    Wave,
    Beam,
};

