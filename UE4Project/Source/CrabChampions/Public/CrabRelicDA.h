#pragma once
#include "CoreMinimal.h"
#include "CrabInventoryDA.h"
#include "ECrabRelicType.h"
#include "CrabRelicDA.generated.h"

UCLASS(Blueprintable)
class CRABCHAMPIONS_API UCrabRelicDA : public UCrabInventoryDA {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECrabRelicType RelicType;
    
    UCrabRelicDA();

};

