#pragma once
#include "CoreMinimal.h"
#include "ECrabDebuffType.generated.h"

UENUM(BlueprintType)
enum class ECrabDebuffType : uint8 {
    None,
    Ice,
    Fire,
    Lightning,
    Poison,
    Arcane,
    Last,
};

