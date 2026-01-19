#pragma once
#include "CoreMinimal.h"
#include "CrabPickupDA.h"
#include "ECrabConsumableType.h"
#include "CrabConsumableDA.generated.h"

UCLASS(Blueprintable)
class CRABCHAMPIONS_API UCrabConsumableDA : public UCrabPickupDA {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECrabConsumableType ConsumableType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Buff;
    
    UCrabConsumableDA();

};

