#pragma once
#include "CoreMinimal.h"
#include "ECrabContractType.generated.h"

UENUM(BlueprintType)
enum class ECrabContractType : uint8 {
    None,
    TimeTrial,
    NoHeals,
    Pacifist,
    ShieldedElite,
    Zombies,
    Clones,
    Chaos,
    Last,
};

