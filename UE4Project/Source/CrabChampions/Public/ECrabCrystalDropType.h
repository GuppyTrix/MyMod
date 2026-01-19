#pragma once
#include "CoreMinimal.h"
#include "ECrabCrystalDropType.generated.h"

UENUM(BlueprintType)
enum class ECrabCrystalDropType : uint8 {
    None,
    Small,
    Medium,
    Large,
    Gigantic,
    SmallWithBonus,
    MediumWithBonus,
    LargeWithBonus,
    GiganticWithBonus,
};

