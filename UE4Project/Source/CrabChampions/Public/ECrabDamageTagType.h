#pragma once
#include "CoreMinimal.h"
#include "ECrabDamageTagType.generated.h"

UENUM(BlueprintType)
enum class ECrabDamageTagType : uint8 {
    None,
    CriticalHit,
    DOT,
    HealthShot,
    MoneyShot,
    Endangering,
    ArmorPenetration,
};

