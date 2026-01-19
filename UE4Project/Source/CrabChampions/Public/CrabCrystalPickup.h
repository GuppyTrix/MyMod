#pragma once
#include "CoreMinimal.h"
#include "CrabOverlapPickup.h"
#include "ECrabCrystalDropType.h"
#include "CrabCrystalPickup.generated.h"

UCLASS(Abstract, Blueprintable)
class CRABCHAMPIONS_API ACrabCrystalPickup : public ACrabOverlapPickup {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_CrystalDropType, meta=(AllowPrivateAccess=true))
    ECrabCrystalDropType CrystalDropType;
    
public:
    ACrabCrystalPickup(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_CrystalDropType();
    
};

