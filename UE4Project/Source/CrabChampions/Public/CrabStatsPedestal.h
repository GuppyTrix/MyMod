#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CrabLobbyStats.h"
#include "Templates/SubclassOf.h"
#include "CrabStatsPedestal.generated.h"

class UCrabStatsUI;
class UStaticMesh;
class UStaticMeshComponent;
class UWidgetComponent;

UCLASS(Abstract, Blueprintable)
class CRABCHAMPIONS_API ACrabStatsPedestal : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* PedestalMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidgetComponent* StatsWC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* PedestalMeshToSpawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UCrabStatsUI> StatsUIToSpawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_LobbyStats, meta=(AllowPrivateAccess=true))
    FCrabLobbyStats LobbyStats;
    
public:
    ACrabStatsPedestal(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_LobbyStats();
    
};

