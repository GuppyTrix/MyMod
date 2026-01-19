#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CrabPedestalInfo.h"
#include "ECrabCurrencyType.h"
#include "ECrabLootPool.h"
#include "Templates/SubclassOf.h"
#include "CrabShopPedestal.generated.h"

class UCrabPickupDA;
class UCrabShopPedestalUI;
class UStaticMesh;
class UStaticMeshComponent;
class UWidgetComponent;

UCLASS(Abstract, Blueprintable)
class CRABCHAMPIONS_API ACrabShopPedestal : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* PedestalMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidgetComponent* PedestalWC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* PedestalMeshToSpawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UCrabShopPedestalUI> ShopPedestalUIToSpawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECrabLootPool LootPool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 MaxPickups;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECrabCurrencyType CurrencyType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UCrabPickupDA* PickupToSpawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FCrabPedestalInfo PedestalInfo;
    
public:
    ACrabShopPedestal(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastInitPedestalInfo(const FCrabPedestalInfo& NewPedestalInfo);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastHidePedestalWC();
    
};

