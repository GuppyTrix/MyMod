#pragma once
#include "CoreMinimal.h"
#include "CrabWeaponInfo.generated.h"

class ACrabC;
class UCrabWeaponDA;

USTRUCT(BlueprintType)
struct FCrabWeaponInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCrabWeaponDA* WeaponDA;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ACrabC* OwningC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsDualWieldWeapon;
    
    CRABCHAMPIONS_API FCrabWeaponInfo();
};

