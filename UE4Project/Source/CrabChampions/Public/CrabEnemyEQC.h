#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryContext.h"
#include "ECrabEQCType.h"
#include "CrabEnemyEQC.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class CRABCHAMPIONS_API UCrabEnemyEQC : public UEnvQueryContext {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECrabEQCType EQCType;
    
public:
    UCrabEnemyEQC();

};

