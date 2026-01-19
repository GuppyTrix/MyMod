#pragma once
#include "CoreMinimal.h"
#include "ECrabRank.h"
#include "CrabRankedWeapon.generated.h"

class UCrabPickupDA;

USTRUCT(BlueprintType)
struct FCrabRankedWeapon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCrabPickupDA* Weapon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECrabRank Rank;
    
    CRABCHAMPIONS_API FCrabRankedWeapon();
};

