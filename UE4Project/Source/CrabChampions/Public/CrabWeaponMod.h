#pragma once
#include "CoreMinimal.h"
#include "CrabInventoryInfo.h"
#include "CrabWeaponMod.generated.h"

class UCrabWeaponModDA;

USTRUCT(BlueprintType)
struct FCrabWeaponMod {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCrabWeaponModDA* WeaponModDA;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCrabInventoryInfo InventoryInfo;
    
    CRABCHAMPIONS_API FCrabWeaponMod();
};

