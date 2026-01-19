#pragma once
#include "CoreMinimal.h"
#include "CrabActionDA.h"
#include "CrabProximityExplodeActionDA.generated.h"

class UCrabAOEDA;

UCLASS(Blueprintable)
class CRABCHAMPIONS_API UCrabProximityExplodeActionDA : public UCrabActionDA {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCrabAOEDA* ExplosionAOEDA;
    
    UCrabProximityExplodeActionDA();

};

