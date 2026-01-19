#pragma once
#include "CoreMinimal.h"
#include "ECrabEnemyBuff.generated.h"

UENUM(BlueprintType)
enum class ECrabEnemyBuff : uint8 {
    None,
    Shielded,
    Armored,
    Healthy,
    Regenerating,
    Resurrecting,
    Angered,
    Frenzied,
    Speedy,
    Last,
};

