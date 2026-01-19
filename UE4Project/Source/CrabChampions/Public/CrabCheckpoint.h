#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CrabOverlapInterface.h"
#include "CrabCheckpoint.generated.h"

class UNiagaraComponent;
class UNiagaraSystem;
class USoundCue;
class USphereComponent;

UCLASS(Abstract, Blueprintable)
class CRABCHAMPIONS_API ACrabCheckpoint : public AActor, public ICrabOverlapInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USphereComponent* CheckpointCollision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* CheckpointNC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraSystem* CheckpointFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsFinalCheckpoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* CheckpointActiveSound;
    
public:
    ACrabCheckpoint(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

