#pragma once
#include "CoreMinimal.h"
#include "CrabActionDA.h"
#include "CrabAOEActionDA.generated.h"

class UCrabAOEDA;

UCLASS(Blueprintable)
class CRABCHAMPIONS_API UCrabAOEActionDA : public UCrabActionDA {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCrabAOEDA* AOEDA;
    
    UCrabAOEActionDA();

};

