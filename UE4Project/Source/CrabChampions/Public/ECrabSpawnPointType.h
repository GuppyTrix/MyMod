#pragma once
#include "CoreMinimal.h"
#include "ECrabSpawnPointType.generated.h"

UENUM(BlueprintType)
enum class ECrabSpawnPointType : uint8 {
    Player,
    Destructible,
    Totem,
    Secret,
    Gauntlet,
    Enemy,
    Reward,
    Portal,
    Shop,
};

