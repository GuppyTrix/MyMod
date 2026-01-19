#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CrabOverlapInterface.h"
#include "CrabOverlapPickup.generated.h"

class ACrabPlayerC;
class UNiagaraComponent;
class UNiagaraSystem;
class USoundCue;
class USphereComponent;

UCLASS(Abstract, Blueprintable)
class CRABCHAMPIONS_API ACrabOverlapPickup : public AActor, public ICrabOverlapInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* PickupNC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USphereComponent* PickupCollision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OverlapRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LifeTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraSystem* PickupFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_PickedUpByC, meta=(AllowPrivateAccess=true))
    ACrabPlayerC* PickedUpByC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* OnPickedUpSound;
    
public:
    ACrabOverlapPickup(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_PickedUpByC();
    

    // Fix for true pure virtual functions not being implemented
};

