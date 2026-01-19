#pragma once
#include "CoreMinimal.h"
#include "ECrabDifficultyModifier.generated.h"

UENUM(BlueprintType)
enum class ECrabDifficultyModifier : uint8 {
    Relaxed,
    Ironclad,
    StartingGift,
    DiscountedShops,
    LootGoblin,
    Lucky,
    UltraLuck,
    LastGreenModifier,
    Nightmare,
    LockedSlots,
    BuffedEnemies,
    TripleChallenge,
    AmbushingElites,
    EternalPunishment,
    UnfairBosses,
    NoSafetyNet,
    UltraChaos,
    WanderingElites,
    SlowRecovery,
    AthleticEnemies,
    ImmortalSnail,
    LastRedModifier,
    ImpossibleModeI,
    ImpossibleModeII,
    ImpossibleModeIII,
    ImpossibleModeIV,
    Countdown,
    ManualCollection,
    HandleWithCare,
    RandomLoadout,
    LastFlexModifier,
};

