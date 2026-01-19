#pragma once
#include "CoreMinimal.h"
#include "ECrabEnemyMovementType.generated.h"

UENUM(BlueprintType)
enum class ECrabEnemyMovementType : uint8 {
    None,
    MoveDirectlyToEnemy,
    MoveToPredictedEnemyLoc,
    MoveToRangedActionLoc,
};

