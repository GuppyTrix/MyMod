#pragma once
#include "CoreMinimal.h"
#include "CrabInventoryDA.h"
#include "ECrabMeleeModType.h"
#include "CrabMeleeModDA.generated.h"

UCLASS(Blueprintable)
class CRABCHAMPIONS_API UCrabMeleeModDA : public UCrabInventoryDA {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECrabMeleeModType MeleeModType;
    
    UCrabMeleeModDA();

};

