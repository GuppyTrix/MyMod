#pragma once
#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "ECrabBlessing.h"
#include "ECrabChallengeModifier.h"
#include "ECrabIslandType.h"
#include "Templates/SubclassOf.h"
#include "CrabGM.generated.h"

class ACrabC;
class ACrabLM;
class ACrabPC;
class ACrabPortal;
class ANavigationData;

UCLASS(Abstract, Blueprintable, NonTransient)
class CRABCHAMPIONS_API ACrabGM : public AGameModeBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ACrabPC> PCToSpawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DebugInitDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DebugCurrentIsland;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECrabIslandType DebugIslandType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ECrabChallengeModifier> DebugChallengeModifiers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECrabBlessing DebugBlessing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ACrabLM* LM;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 WaitingForMorePlayersDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PreStartDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ACrabC> CharacterToSpawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<ACrabPortal*, int32> CurrentPortals;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ACrabPortal* ChosenPortal;
    
public:
    ACrabGM(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnNavigationGenerationFinished(ANavigationData* NavData);
    
public:
    UFUNCTION(BlueprintCallable, Exec)
    void DebugGoToNextIsland();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugGoToNextBiome();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugGoToIsland(int32 IslandToGoTo);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugEndRun();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugCompleteIsland();
    
};

