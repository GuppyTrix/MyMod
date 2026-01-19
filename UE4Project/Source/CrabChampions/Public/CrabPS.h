#pragma once
#include "CoreMinimal.h"
#include "GameFramework/PlayerState.h"
#include "CrabAbilityMod.h"
#include "CrabHealthInfo.h"
#include "CrabInventoryCooldown.h"
#include "CrabMeleeMod.h"
#include "CrabPerk.h"
#include "CrabRelic.h"
#include "CrabWeaponMod.h"
#include "ECrabAbilityModType.h"
#include "ECrabMeleeModType.h"
#include "ECrabPerkType.h"
#include "ECrabPickupType.h"
#include "ECrabRank.h"
#include "ECrabRarity.h"
#include "ECrabRelicType.h"
#include "ECrabTintType.h"
#include "ECrabWeaponModType.h"
#include "CrabPS.generated.h"

class ACrabAnvil;
class ACrabCheckpoint;
class ACrabPortal;
class UCrabAbilityDA;
class UCrabMeleeDA;
class UCrabPickupDA;
class UCrabWeaponDA;
class UMaterialInterface;

UCLASS(Blueprintable)
class CRABCHAMPIONS_API ACrabPS : public APlayerState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FCrabInventoryCooldown> InventoryCooldowns;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    ECrabTintType PlayerTintType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UCrabPickupDA*> PSPickups;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    int32 ComboCounter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_Combo, meta=(AllowPrivateAccess=true))
    float Combo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_Eliminations, meta=(AllowPrivateAccess=true))
    int32 Eliminations;
    
    UPROPERTY(EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    uint32 DamageDealt;
    
    UPROPERTY(EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    uint32 HighestDamageDealt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    int32 DamageTaken;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_DamageTakenOnThisIsland, meta=(AllowPrivateAccess=true))
    int32 DamageTakenOnThisIsland;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    int32 NumFlawlessIslands;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FCrabHealthInfo HealthInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    float BaseMaxHealth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    float MaxHealthMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    float DamageMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_ScaleMultiplier, meta=(AllowPrivateAccess=true))
    float ScaleMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_AccountRank, meta=(AllowPrivateAccess=true))
    ECrabRank AccountRank;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_AccountLevel, meta=(AllowPrivateAccess=true))
    int32 AccountLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_Keys, meta=(AllowPrivateAccess=true))
    int32 Keys;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMaterialInterface* CrabSkin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_WeaponDA, meta=(AllowPrivateAccess=true))
    UCrabWeaponDA* WeaponDA;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_AbilityDA, meta=(AllowPrivateAccess=true))
    UCrabAbilityDA* AbilityDA;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_MeleeDA, meta=(AllowPrivateAccess=true))
    UCrabMeleeDA* MeleeDA;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_Inventory, meta=(AllowPrivateAccess=true))
    uint8 NumWeaponModSlots;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_Inventory, meta=(AllowPrivateAccess=true))
    TArray<FCrabWeaponMod> WeaponMods;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_Inventory, meta=(AllowPrivateAccess=true))
    uint8 NumAbilityModSlots;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_Inventory, meta=(AllowPrivateAccess=true))
    TArray<FCrabAbilityMod> AbilityMods;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_Inventory, meta=(AllowPrivateAccess=true))
    uint8 NumMeleeModSlots;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_Inventory, meta=(AllowPrivateAccess=true))
    TArray<FCrabMeleeMod> MeleeMods;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_Inventory, meta=(AllowPrivateAccess=true))
    uint8 NumPerkSlots;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_Inventory, meta=(AllowPrivateAccess=true))
    TArray<FCrabPerk> Perks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_Inventory, meta=(AllowPrivateAccess=true))
    TArray<FCrabRelic> Relics;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    int32 NumTimesSalvaged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    int32 NumShopPurchases;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    int32 NumShopRerolls;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    int32 NumTotemsDestroyed;
    
    UPROPERTY(EditAnywhere, Transient, ReplicatedUsing=OnRep_Crystals, meta=(AllowPrivateAccess=true))
    uint32 Crystals;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_IslandRewardRarity, meta=(AllowPrivateAccess=true))
    ECrabRarity IslandRewardRarity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ACrabCheckpoint* ParkourCheckpoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    TArray<ACrabAnvil*> ChosenAnvils;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ACrabPortal* ChosenPortal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    int32 TotalTimeTaken;
    
public:
    ACrabPS(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerSetWeaponDA(UCrabWeaponDA* NewWeaponDA);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerSetMeleeDA(UCrabMeleeDA* NewMeleeDA);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerSetAbilityDA(UCrabAbilityDA* NewAbilityDA);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerRemoveWeaponMod(ECrabWeaponModType WeaponModType);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerRemoveRelic(ECrabRelicType RelicType);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerRemovePerk(ECrabPerkType PerkType);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerRemoveMeleeMod(ECrabMeleeModType MeleeModType);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerRemoveAbilityMod(ECrabAbilityModType AbilityModType);
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerRefreshAccount(ECrabRank NewAccountRank, int32 NewAccountLevel, int32 NewKeys);
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerIncrementNumInventorySlots(ECrabPickupType PickupType, int32 Cost);
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerEquipInventory(UCrabWeaponDA* NewWeaponDA, UCrabAbilityDA* NewAbilityDA, UCrabMeleeDA* NewMeleeDA);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerEquipCosmetics(UMaterialInterface* NewCrabSkin);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_WeaponDA();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ScaleMultiplier();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_MeleeDA();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Keys();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_IslandRewardRarity();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Inventory();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Eliminations();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_DamageTakenOnThisIsland();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Crystals();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Combo();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_AccountRank();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_AccountLevel();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_AbilityDA();
    
};

