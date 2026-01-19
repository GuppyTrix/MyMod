#pragma once
#include "CoreMinimal.h"
#include "CrabAnimInstance.h"
#include "CrabEnemyAnimInstance.generated.h"

class ACrabEnemyC;

UCLASS(Blueprintable, NonTransient)
class CRABCHAMPIONS_API UCrabEnemyAnimInstance : public UCrabAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ACrabEnemyC* OwningEnemyC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RandomAnimOffset;
    
public:
    UCrabEnemyAnimInstance();

    UFUNCTION(BlueprintCallable)
    void AnimNotify_Action();
    
};

