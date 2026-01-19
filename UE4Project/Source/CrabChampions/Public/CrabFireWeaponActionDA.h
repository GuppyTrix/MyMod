#pragma once
#include "CoreMinimal.h"
#include "CrabActionDA.h"
#include "ECrabTargetType.h"
#include "CrabFireWeaponActionDA.generated.h"

UCLASS(Blueprintable)
class CRABCHAMPIONS_API UCrabFireWeaponActionDA : public UCrabActionDA {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECrabTargetType TargetType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Spread;
    
    UCrabFireWeaponActionDA();

};

