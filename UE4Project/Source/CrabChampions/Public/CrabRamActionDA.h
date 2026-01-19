#pragma once
#include "CoreMinimal.h"
#include "CrabActionDA.h"
#include "CrabRamActionDA.generated.h"

class UCrabAOEDA;

UCLASS(Blueprintable)
class CRABCHAMPIONS_API UCrabRamActionDA : public UCrabActionDA {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RamSpeedMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCrabAOEDA* RamAOEDA;
    
    UCrabRamActionDA();

};

