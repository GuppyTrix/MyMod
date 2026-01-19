#pragma once
#include "CoreMinimal.h"
#include "ECrabPickupTag.generated.h"

UENUM(BlueprintType)
enum class ECrabPickupTag : uint8 {
    None,
    Healing,
    DamageOverTime,
    Critical,
    Speed,
    Bounce,
    Ice,
    Fire,
    Lightning,
    Poison,
    Arcane,
    Turret,
    Combo,
    GlueShot,
};

