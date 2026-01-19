#pragma once
#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "CrabAutoSave.h"
#include "CrabChallenge.h"
#include "CrabDamageInfo.h"
#include "CrabLobbyStats.h"
#include "CrabNextIslandInfo.h"
#include "ECrabDamageHitType.h"
#include "ECrabOutOfBoundsState.h"
#include "Templates/SubclassOf.h"
#include "CrabPC.generated.h"

class ACrabDamageTextActor;
class ACrabPS;
class ACrabPlayerC;
class ACrabTotem;
class ALevelSequenceActor;
class UCameraShakeBase;
class UCrabCosmeticsMenuUI;
class UCrabDamageTextUI;
class UCrabDifficultyMenuUI;
class UCrabFocusMenuUI;
class UCrabGameOverUI;
class UCrabGameStateUI;
class UCrabGameplayUI;
class UCrabInGameMenuUI;
class UCrabInventoryUI;
class UCrabMinigameGameOverUI;
class UCrabMultiplayerMenuUI;
class UCrabPickupDA;
class UCurveFloat;
class ULevelSequence;
class USoundCue;
class USubmixEffectFilterPreset;

UCLASS(Abstract, Blueprintable)
class CRABCHAMPIONS_API ACrabPC : public APlayerController {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* ArmorHitmarkerSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* ArmorBreakHitmarkerSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* QuietHitmarkerSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* NormalHitmarkerSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* LoudHitmarkerSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* QuietCritHitmarkerSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* NormalCritHitmarkerSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* LoudCritHitmarkerSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* KnockbackDamageHitmarkerSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* EliminationHitmarkerSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UCameraShakeBase> EliminationCameraShake;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* SlomoRampCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ALevelSequenceActor* LSActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USubmixEffectFilterPreset* LowPassSubmixEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULevelSequence* PortalTransitionLS;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UCrabDamageTextUI> DamageTextUIToSpawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<ACrabDamageTextActor*> PooledDamageTextActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UCrabDamageTextUI> SpecialDamageTextUIToSpawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<ACrabDamageTextActor*> PooledSpecialDamageTextActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FCrabChallenge> CompletedChallenges;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ACrabPlayerC* ClientOwnedC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UCrabGameStateUI> GameStateUIToSpawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UCrabGameStateUI* GameStateUI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UCrabGameplayUI> GameplayUIToSpawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UCrabGameplayUI* GameplayUI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UCrabInventoryUI> InventoryUIToSpawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UCrabInventoryUI* InventoryUI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UCrabInGameMenuUI> InGameMenuToSpawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UCrabInGameMenuUI* InGameMenuUI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UCrabCosmeticsMenuUI> CosmeticsMenuUIToSpawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UCrabCosmeticsMenuUI* CosmeticsMenuUI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UCrabDifficultyMenuUI> DifficultyMenuUIToSpawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UCrabDifficultyMenuUI* DifficultyMenuUI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UCrabMultiplayerMenuUI> MultiplayerMenuUIToSpawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UCrabMultiplayerMenuUI* MultiplayerMenuUI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UCrabGameOverUI> GameOverUIToSpawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UCrabGameOverUI* GameOverUI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UCrabMinigameGameOverUI> MinigameGameOverUIToSpawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UCrabMinigameGameOverUI* MinigameGameOverUI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UCrabFocusMenuUI* ActiveFocusMenuUI;
    
public:
    ACrabPC(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerUploadLobbyStats(const FCrabLobbyStats& LobbyStats);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerSpectateNextPlayer();
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerSpawnKeyTotemPickup(ACrabTotem* KeyTotem, UCrabPickupDA* PickupToSpawn);
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerSendChatMessage(const FString& ChatMessage);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerRestoreAutoSave(const FCrabAutoSave& AutoSave);
    
public:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientUploadLobbyStats();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientStartSlomoRamp();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientShowLoadingScreenUI();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientShowCosmeticsMenuUI();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientSetIsCharacterInputEnabled(bool bNewIsCharacterInputEnabled);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientRefreshPSUI();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientPlayerLeftGame();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientOnUpdatedOutOfBoundsState(ECrabOutOfBoundsState NewOutOfBoundsState);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientOnTookDamage(ECrabDamageHitType DamageHitType);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientOnReceivedChatMessage(ACrabPS* PS, const FString& ChatMessage);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientOnPickedUpPickup(UCrabPickupDA* PickupDA, uint8 Level);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientOnInteractedWithKeyTotem(ACrabTotem* KeyTotem);
    
protected:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientOnEnteredPortal(const FCrabNextIslandInfo& NextIslandInfo, bool bSaveAutoSave);
    
public:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientOnEliminated(const FString& EliminationCause);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientOnClearedIsland(bool bWasFlawlessClear);
    
    UFUNCTION(BlueprintCallable, Client, Unreliable)
    void ClientNotifyDamageDealt(const FCrabDamageInfo& DamageInfo, ECrabDamageHitType DamageHitType);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientLeaveGame();
    
    UFUNCTION(BlueprintCallable, Client, Unreliable)
    void ClientInventoryEvent(const FString& InventoryEventMessage);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientClearAutoSave();
    
};

