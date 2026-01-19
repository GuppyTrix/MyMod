#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CrabBounds.generated.h"

class USplineComponent;

UCLASS(Abstract, Blueprintable)
class CRABCHAMPIONS_API ACrabBounds : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USplineComponent* BoundsSC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BoundsLowZ;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BoundsHighZ;
    
public:
    ACrabBounds(const FObjectInitializer& ObjectInitializer);

};

