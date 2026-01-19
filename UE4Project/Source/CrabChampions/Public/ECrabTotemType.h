#pragma once
#include "CoreMinimal.h"
#include "ECrabTotemType.generated.h"

UENUM(BlueprintType)
enum class ECrabTotemType : uint8 {
    None,
    Cosmetics,
    Difficulty,
    Key,
    Multiplayer,
    Health,
    Crystal,
    Chance,
    Gamble,
    Loot,
    Gold,
    Glass,
    Fuse,
    Greed,
    Upgrade,
    Enhancement,
    Random,
    Contract,
    XL,
    Reroll,
};

