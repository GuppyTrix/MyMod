#pragma once
#include "CoreMinimal.h"
#include "CrabInventoryDA.h"
#include "ECrabTriggerChanceType.h"
#include "ECrabWeaponModType.h"
#include "CrabWeaponModDA.generated.h"

UCLASS(Blueprintable)
class CRABCHAMPIONS_API UCrabWeaponModDA : public UCrabInventoryDA {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECrabWeaponModType WeaponModType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECrabTriggerChanceType TriggerChanceType;
    
    UCrabWeaponModDA();

};

