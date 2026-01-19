#pragma once
#include "CoreMinimal.h"
#include "ECrabDamageAreaType.generated.h"

UENUM(BlueprintType)
enum class ECrabDamageAreaType : uint8 {
    None,
    Damage,
    Health,
    MaxHealth,
    EnergyRing,
    BlackHole,
};

