#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "CrabAnimInstance.h"
#include "CrabPlayerAnimInstance.generated.h"

class ACrabPlayerC;

UCLASS(Blueprintable, NonTransient)
class CRABCHAMPIONS_API UCrabPlayerAnimInstance : public UCrabAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ACrabPlayerC* OwningPlayerC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrentTurnDir;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D CurrentInputDir;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsSliding;
    
public:
    UCrabPlayerAnimInstance();

    UFUNCTION(BlueprintCallable)
    void AnimNotify_Melee();
    
};

