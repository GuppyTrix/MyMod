#pragma once
#include "CoreMinimal.h"
#include "AIController.h"
#include "AITypes.h"
#include "Navigation/PathFollowingComponent.h"
#include "CrabAISettings.h"
#include "CrabEnemyAIC.generated.h"

class ACrabC;
class ACrabEnemyC;
class UEnvQuery;

UCLASS(Blueprintable)
class CRABCHAMPIONS_API ACrabEnemyAIC : public AAIController {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FCrabAISettings AISettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ACrabEnemyC* OwnedC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ACrabC* BestEnemyC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UEnvQuery* RangedActionEnvQuery;
    
public:
    ACrabEnemyAIC(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnReceiveMoveCompleted(FAIRequestID RequestID, TEnumAsByte<EPathFollowingResult::Type> Result);
    
};

