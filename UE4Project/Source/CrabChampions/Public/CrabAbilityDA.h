#pragma once
#include "CoreMinimal.h"
#include "CrabPickupDA.h"
#include "ECrabAbilitySpawnType.h"
#include "ECrabHitmarkerType.h"
#include "CrabAbilityDA.generated.h"

class UAnimMontage;
class UCrabProjectileDA;
class UNiagaraSystem;
class USoundCue;

UCLASS(Blueprintable)
class CRABCHAMPIONS_API UCrabAbilityDA : public UCrabPickupDA {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCrabProjectileDA* ProjectileDA;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECrabHitmarkerType HitmarkerType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECrabAbilitySpawnType AbilitySpawnType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AbilitySpawnDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Cooldown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* Montage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraSystem* AbilityTelegraphFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* AbilityTelegraphSound;
    
    UCrabAbilityDA();

};

