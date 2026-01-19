#pragma once
#include "CoreMinimal.h"
#include "ECrabGauntletReward.generated.h"

UENUM(BlueprintType)
enum class ECrabGauntletReward : uint8 {
    None,
    CrystalBundle,
    Armor,
    CommonPickup,
    RandomRarityPickup,
    EpicPickup,
    LegendaryPickup,
    Last,
};

