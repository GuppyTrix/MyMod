#pragma once
#include "CoreMinimal.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "ClientAuthoritativeMoveData.h"
#include "CrabCMC.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class CRABCHAMPIONS_API UCrabCMC : public UCharacterMovementComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FClientAuthoritativeMoveData ServerLatestMoveData;
    
public:
    UCrabCMC(const FObjectInitializer& ObjectInitializer);

};

