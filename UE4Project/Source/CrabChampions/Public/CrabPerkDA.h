#pragma once
#include "CoreMinimal.h"
#include "CrabInventoryDA.h"
#include "ECrabPerkType.h"
#include "CrabPerkDA.generated.h"

UCLASS(Blueprintable)
class CRABCHAMPIONS_API UCrabPerkDA : public UCrabInventoryDA {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECrabPerkType PerkType;
    
    UCrabPerkDA();

};

