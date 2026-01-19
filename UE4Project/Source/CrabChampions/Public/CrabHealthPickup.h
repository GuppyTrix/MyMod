#pragma once
#include "CoreMinimal.h"
#include "CrabOverlapPickup.h"
#include "CrabHealthPickup.generated.h"

UCLASS(Abstract, Blueprintable)
class CRABCHAMPIONS_API ACrabHealthPickup : public ACrabOverlapPickup {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_HealthToGive, meta=(AllowPrivateAccess=true))
    float HealthToGive;
    
public:
    ACrabHealthPickup(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_HealthToGive();
    
};

