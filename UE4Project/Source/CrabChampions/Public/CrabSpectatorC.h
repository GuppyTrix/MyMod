#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "CrabSpectatorC.generated.h"

class ACrabPlayerC;
class UCameraComponent;
class USpringArmComponent;

UCLASS(Blueprintable)
class CRABCHAMPIONS_API ACrabSpectatorC : public APawn {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USpringArmComponent* CameraSpringArm;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCameraComponent* SpectatorCamera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ACrabPlayerC* SpectatingPlayer;
    
public:
    ACrabSpectatorC(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientSpectatePlayer(ACrabPlayerC* PlayerToSpectate, bool bShowSpectatingUI);
    
public:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientInitSpectatorC(ACrabPlayerC* EliminatedPlayerToSpectate);
    
};

