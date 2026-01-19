#pragma once
#include "CoreMinimal.h"
#include "CrabActionDA.h"
#include "ECrabTargetType.h"
#include "CrabLaunchActionDA.generated.h"

class UCrabAOEDA;

UCLASS(Blueprintable)
class CRABCHAMPIONS_API UCrabLaunchActionDA : public UCrabActionDA {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECrabTargetType TargetType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PreLaunchHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LaunchSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCrabAOEDA* LandAOEDA;
    
    UCrabLaunchActionDA();

};

