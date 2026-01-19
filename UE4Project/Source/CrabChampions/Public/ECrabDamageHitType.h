#pragma once
#include "CoreMinimal.h"
#include "ECrabDamageHitType.generated.h"

UENUM(BlueprintType)
enum class ECrabDamageHitType : uint8 {
    None,
    Armor,
    ArmorBreak,
    Health,
    Crit,
    Elimination,
};

