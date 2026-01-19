#pragma once
#include "CoreMinimal.h"
#include "ECrabEnemyCategory.generated.h"

UENUM(BlueprintType)
enum class ECrabEnemyCategory : uint8 {
    None,
    Easy,
    Medium,
    Hard,
    Elite,
    Boss,
};

