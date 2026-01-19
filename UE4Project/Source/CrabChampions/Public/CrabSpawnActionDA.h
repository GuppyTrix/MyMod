#pragma once
#include "CoreMinimal.h"
#include "CrabActionDA.h"
#include "Templates/SubclassOf.h"
#include "CrabSpawnActionDA.generated.h"

class ACrabEnemyC;

UCLASS(Blueprintable)
class CRABCHAMPIONS_API UCrabSpawnActionDA : public UCrabActionDA {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<ACrabEnemyC>> LesserEnemiesToSpawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxSpawnedLesserEnemies;
    
    UCrabSpawnActionDA();

};

