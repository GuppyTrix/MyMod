#pragma once
#include "CoreMinimal.h"
#include "ECrabMatchState.generated.h"

UENUM(BlueprintType)
enum class ECrabMatchState : uint8 {
    None,
    WaitingToStart,
    PortalCountdown,
    StartedIsland,
    ClearedIsland,
    AllPlayersEliminated,
    GameOver,
    Restarting,
};

