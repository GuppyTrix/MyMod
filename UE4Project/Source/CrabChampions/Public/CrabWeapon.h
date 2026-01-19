#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CrabWeaponInfo.h"
#include "CrabWeapon.generated.h"

class ACrabC;
class ACrabPC;
class ACrabPS;
class UCrabWeaponDA;
class UNiagaraComponent;
class UStaticMeshComponent;

UCLASS(Blueprintable)
class CRABCHAMPIONS_API ACrabWeapon : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* Mesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* CosmeticNC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* MuzzleFlashNC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_OwningPS, meta=(AllowPrivateAccess=true))
    ACrabPS* OwningPS;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_WeaponInfo, meta=(AllowPrivateAccess=true))
    FCrabWeaponInfo WeaponInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UCrabWeaponDA* WeaponDA;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ACrabC* OwningC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ACrabPC* OwningPC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AActor*> ActorsToIgnore;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_TimesFired, meta=(AllowPrivateAccess=true))
    int32 TimesFired;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_IsReloading, meta=(AllowPrivateAccess=true))
    bool bIsReloading;
    
public:
    ACrabWeapon(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerTriggerOnReloadWeaponMods();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerSetIsReloading(bool bNewIsReloading);
    
    UFUNCTION(BlueprintCallable, Server, Unreliable)
    void ServerPlayStartFireFX();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_WeaponInfo();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_TimesFired();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_OwningPS();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_IsReloading();
    
};

