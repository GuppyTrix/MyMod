#pragma once
#include "CoreMinimal.h"
#include "ECrabPickupType.generated.h"

UENUM(BlueprintType)
enum class ECrabPickupType : uint8 {
    None,
    Weapon,
    Ability,
    Melee,
    WeaponMod,
    AbilityMod,
    MeleeMod,
    Perk,
    Relic,
    Consumable,
    Random,
};

