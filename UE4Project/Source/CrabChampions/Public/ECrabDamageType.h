#pragma once
#include "CoreMinimal.h"
#include "ECrabDamageType.generated.h"

UENUM(BlueprintType)
enum class ECrabDamageType : uint8 {
    None,
    Radial,
    Ability,
    Melee,
    Lesser,
    Knockback,
    DOT,
    Ice,
    Fire,
    Lightning,
    Arcane,
    Hazard,
    Unblockable,
};

