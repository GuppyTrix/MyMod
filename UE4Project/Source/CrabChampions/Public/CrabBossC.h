#pragma once
#include "CoreMinimal.h"
#include "CrabEnemyC.h"
#include "Templates/SubclassOf.h"
#include "CrabBossC.generated.h"

UCLASS(Abstract, Blueprintable)
class CRABCHAMPIONS_API ACrabBossC : public ACrabEnemyC {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<ACrabEnemyC>> PotentialPhaseLesserEnemiesToSpawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumPhaseTwoLesserEnemiesToSpawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumPhaseThreeLesserEnemiesToSpawn;
    
public:
    ACrabBossC(const FObjectInitializer& ObjectInitializer);

};

