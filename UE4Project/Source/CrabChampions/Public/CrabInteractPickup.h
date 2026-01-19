#pragma once
#include "CoreMinimal.h"
#include "CrabInteractable.h"
#include "CrabPickupInfo.h"
#include "CrabInteractPickup.generated.h"

class UNiagaraComponent;
class UWidgetComponent;

UCLASS(Blueprintable)
class CRABCHAMPIONS_API ACrabInteractPickup : public ACrabInteractable {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* PickupPrimaryNC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* PickupSecondaryNC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidgetComponent* PickupLocationWC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_PickupInfo, meta=(AllowPrivateAccess=true))
    FCrabPickupInfo PickupInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_NumTimesPickedUp, meta=(AllowPrivateAccess=true))
    uint8 NumTimesPickedUp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_IsPickupDeactivated, meta=(AllowPrivateAccess=true))
    bool bIsPickupDeactivated;
    
public:
    ACrabInteractPickup(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_PickupInfo();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_NumTimesPickedUp();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_IsPickupDeactivated();
    
};

