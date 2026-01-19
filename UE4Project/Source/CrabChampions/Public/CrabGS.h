#pragma once
#include "CoreMinimal.h"
#include "GameFramework/GameStateBase.h"
#include "ECrabBiome.h"
#include "ECrabBlessing.h"
#include "ECrabChallengeModifier.h"
#include "ECrabDifficultyModifier.h"
#include "ECrabGauntletReward.h"
#include "ECrabIslandType.h"
#include "ECrabLootPool.h"
#include "ECrabMatchState.h"
#include "ECrabRank.h"
#include "CrabGS.generated.h"

class ACrabLM;

UCLASS(Blueprintable)
class CRABCHAMPIONS_API ACrabGS : public AGameStateBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ACrabLM* LM;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_MatchState, meta=(AllowPrivateAccess=true))
    ECrabMatchState MatchState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    bool bIsTimePaused;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_CurrentTime, meta=(AllowPrivateAccess=true))
    int32 CurrentTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_CurrentCountdown, meta=(AllowPrivateAccess=true))
    int32 CurrentCountdown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_Difficulty, meta=(AllowPrivateAccess=true))
    ECrabRank Difficulty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_DifficultyModifiers, meta=(AllowPrivateAccess=true))
    TArray<ECrabDifficultyModifier> DifficultyModifiers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_CountdownDifficultyModifier, meta=(AllowPrivateAccess=true))
    int32 CountdownDifficultyModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    TArray<ECrabBiome> BiomeOrder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    ECrabBiome Biome;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    int32 CurrentIsland;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    ECrabIslandType CurrentIslandType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    int32 CurrentIslandStartTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_CurrentIslandTimeRemaining, meta=(AllowPrivateAccess=true))
    int32 CurrentIslandTimeRemaining;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    int32 XLLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_ChallengeModifiers, meta=(AllowPrivateAccess=true))
    TArray<ECrabChallengeModifier> ChallengeModifiers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    ECrabBlessing Blessing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_BlessingProgress, meta=(AllowPrivateAccess=true))
    int32 BlessingProgress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    int32 BlessingGoal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    ECrabLootPool RewardLootPool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_Gauntlet, meta=(AllowPrivateAccess=true))
    int32 GauntletCurrentWave;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_Gauntlet, meta=(AllowPrivateAccess=true))
    TArray<ECrabGauntletReward> GauntletRewards;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_MinigameScore, meta=(AllowPrivateAccess=true))
    int32 MinigameScore;
    
public:
    ACrabGS(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_MinigameScore();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_MatchState();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Gauntlet();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_DifficultyModifiers();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Difficulty();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CurrentTime();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CurrentIslandTimeRemaining();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CurrentCountdown();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CountdownDifficultyModifier();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ChallengeModifiers();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_BlessingProgress();
    
};

