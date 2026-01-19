#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "Engine/NetSerialization.h"
#include "CrabC.h"
#include "CrabDamageInfo.h"
#include "CrabInventoryInfo.h"
#include "ECrabInputDir.h"
#include "Templates/SubclassOf.h"
#include "CrabPlayerC.generated.h"

class AActor;
class ACrabChest;
class ACrabInteractPickup;
class ACrabInteractable;
class ACrabPC;
class ACrabPortal;
class UAnimMontage;
class UAudioComponent;
class UCameraComponent;
class UCrabAbilityDA;
class UCrabInventoryDA;
class UCrabMeleeDA;
class UCrabPickupDA;
class UCrabPingUI;
class UCrabPlayerNameUI;
class UCurveFloat;
class UMaterialInstanceDynamic;
class UMaterialInterface;
class UNiagaraComponent;
class UNiagaraSystem;
class USoundCue;
class USpringArmComponent;
class UStaticMesh;
class UStaticMeshComponent;
class UTexture2D;
class UWidgetComponent;

UCLASS(Abstract, Blueprintable)
class CRABCHAMPIONS_API ACrabPlayerC : public ACrabC {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USpringArmComponent* CameraSpringArm;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCameraComponent* Camera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* MeleeMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* CosmeticMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidgetComponent* PlayerNameWC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidgetComponent* PingWC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* SlideNC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAudioComponent* SlideAC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* AmbienceNC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* UnderwaterNC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_IsBananaActive, meta=(AllowPrivateAccess=true))
    bool bIsBananaActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_AbilityDA, meta=(AllowPrivateAccess=true))
    UCrabAbilityDA* AbilityDA;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_MeleeDA, meta=(AllowPrivateAccess=true))
    UCrabMeleeDA* MeleeDA;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_CrabSkin, meta=(AllowPrivateAccess=true))
    UMaterialInterface* CrabSkin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* CosmeticToSpawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FCrabDamageInfo> PendingDamageInfoArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_PendingHealthToHeal, meta=(AllowPrivateAccess=true))
    float PendingHealthToHeal;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FOverlapResult> NearbyActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OverlapSearchRadius;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ACrabInteractable* BestInteractable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UCrabPlayerNameUI> PlayerNameUIToSpawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UCrabPingUI> PingUIToSpawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ACrabPC* OwningPC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTexture2D* InteractControllerIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTexture2D* SalvageControllerIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector DefaultSpringArmOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FallingSpringArmZOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AimAssistRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AimAssistSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* AimAssistTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* FlipMontageF;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* FlipMontageB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* FlipMontageR;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* FlipMontageL;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FlipSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FlipHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StopFlipDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PostFlipVelocityMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BaseDashCooldown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* DashMontageF;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* DashMontageB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* DashMontageR;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* DashMontageL;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DashSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DashHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PostDashVelocityMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_IsSliding, meta=(AllowPrivateAccess=true))
    bool bIsSliding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* SlideSpeedCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraSystem* IceSlideFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* IceSlideSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraSystem* RockSlideFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* RockSlideSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraSystem* SandSlideFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* SandSlideSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SlideMaxAcceleration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SlideBrakingFrictionFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SlideGroundFriction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_SlideDamageIteration, meta=(AllowPrivateAccess=true))
    int32 SlideDamageIteration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_IsAiming, meta=(AllowPrivateAccess=true))
    bool bIsAiming;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* AimingMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* StartAimSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* StopAimSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* MeleeDMI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* InteractMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* InteractFailureSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ACrabInteractPickup* PendingPickupToSalvage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<ACrabChest*> ChestsToAutoLoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_PingLoc, meta=(AllowPrivateAccess=true))
    FVector_NetQuantize PingLoc;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraSystem* PingFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* PingSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraSystem* PrePortalFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* PrePortalSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraSystem* PostPortalFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* PostPortalSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraSystem* BlockedDamageFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* BlockedDamageSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraSystem* SonicBoomFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* SonicBoomSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraSystem* ShockwaveFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* ShockwaveSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_ActiveInteractable, meta=(AllowPrivateAccess=true))
    ACrabInteractable* ActiveInteractable;
    
public:
    ACrabPlayerC(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerUpgradeTotemPurchase(int32 UpgradeCost, UCrabInventoryDA* InventoryDA);
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerStopSlide();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerStopAim();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerStartSlide();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerStartAim();
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerSetActiveInteractable(ACrabInteractable* NewActiveInteractable);
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerSalvage(ACrabInteractPickup* PickupToSalvage);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerPing(const FVector_NetQuantize& InPingLoc);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerMelee();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerInteract(ACrabInteractable* ActorToInteractWith);
    
    UFUNCTION(BlueprintCallable, Server, Unreliable)
    void ServerFlip(ECrabInputDir FlipDir);
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerDropPickup(UCrabPickupDA* PickupDA, const FCrabInventoryInfo& InventoryInfo);
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerDealFallDamage();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerDealDamage(const TArray<FCrabDamageInfo>& DamageInfoArray);
    
    UFUNCTION(BlueprintCallable, Server, Unreliable)
    void ServerDash(ECrabInputDir DashDir);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerAutoLoot();
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerApplyEnhancement(UCrabInventoryDA* InventoryDA);
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerAbility(const FVector_NetQuantize& InAbilityTelegraphLoc);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_SlideDamageIteration();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_PingLoc(FVector_NetQuantize PreviousPingLoc);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_PendingHealthToHeal();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_MeleeDA();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_IsSliding();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_IsBananaActive();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_IsAiming();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CrabSkin();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ActiveInteractable();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_AbilityDA();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void MulticastSonicBoomFX();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void MulticastShockwaveFX();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void MulticastMelee();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void MulticastInteract();
    
public:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastHideStalePing();
    
protected:
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void MulticastFlip(ECrabInputDir FlipDir);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void MulticastDash(ECrabInputDir DashDir);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void MulticastAbility(const FVector_NetQuantize& InAbilityTelegraphLoc);
    
public:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientTeleport(const FVector_NetQuantize& Loc, float Yaw);
    
protected:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientPrePortal(ACrabPortal* Portal);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientPostPortal();
    
public:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientOnTriggeredRingOfDestruction();
    
protected:
    UFUNCTION(BlueprintCallable, Client, Unreliable)
    void ClientOnBlockedDamage();
    
};

