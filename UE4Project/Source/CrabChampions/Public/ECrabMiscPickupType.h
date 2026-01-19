#pragma once
#include "CoreMinimal.h"
#include "ECrabMiscPickupType.generated.h"

UENUM(BlueprintType)
enum class ECrabMiscPickupType : uint8 {
    None,
    StreamerLootUpgradePickup,
    AutoLootPickup,
    InfinitePedestalPickup,
};

