#pragma once
#include "CoreMinimal.h"
#include "ECrabLootPool.generated.h"

UENUM(BlueprintType)
enum class ECrabLootPool : uint8 {
    None,
    Damage,
    Critical,
    Elemental,
    Speed,
    Luck,
    Health,
    Economy,
    Skill,
    Greed,
    Upgrade,
    Random,
    Anvil,
    RelicChest,
    SpikedChest,
    EpicChest,
    LegendaryChest,
    RegenerationChest,
    KeyChest,
    Lesser,
    NoRelicsOrConsumables,
};

