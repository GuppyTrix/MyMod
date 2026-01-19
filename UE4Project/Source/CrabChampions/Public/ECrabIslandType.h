#pragma once
#include "CoreMinimal.h"
#include "ECrabIslandType.generated.h"

UENUM(BlueprintType)
enum class ECrabIslandType : uint8 {
    None,
    Lobby,
    NewRun,
    ContinueRun,
    Arena,
    Horde,
    Demolition,
    Gauntlet,
    Parkour,
    Shop,
    Elite,
    Boss,
    Biome,
    CrabIsland,
    Loop,
    Arcade,
    Holdout,
};

