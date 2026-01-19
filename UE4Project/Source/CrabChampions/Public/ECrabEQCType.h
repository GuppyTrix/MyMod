#pragma once
#include "CoreMinimal.h"
#include "ECrabEQCType.generated.h"

UENUM(BlueprintType)
enum class ECrabEQCType : uint8 {
    None,
    BestEnemyC,
    BestEnemyCoreLoc,
    BestFriendlyC,
};

