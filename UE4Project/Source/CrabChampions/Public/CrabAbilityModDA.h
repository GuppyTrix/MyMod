#pragma once
#include "CoreMinimal.h"
#include "CrabInventoryDA.h"
#include "ECrabAbilityModType.h"
#include "CrabAbilityModDA.generated.h"

UCLASS(Blueprintable)
class CRABCHAMPIONS_API UCrabAbilityModDA : public UCrabInventoryDA {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECrabAbilityModType AbilityModType;
    
    UCrabAbilityModDA();

};

