#pragma once
#include "CoreMinimal.h"
#include "CrabFocusMenuUI.h"
#include "CrabSettingsMenuUI.generated.h"

class UButton;
class UCrabControlsMenuUI;
class UCrabSoundMenuUI;
class UCrabVideoMenuUI;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class CRABCHAMPIONS_API UCrabSettingsMenuUI : public UCrabFocusMenuUI {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCrabVideoMenuUI* VideoMenu;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCrabSoundMenuUI* SoundMenu;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCrabControlsMenuUI* ControlsMenu;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UButton* VideoButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UButton* SoundButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UButton* ControlsButton;
    
public:
    UCrabSettingsMenuUI();

protected:
    UFUNCTION(BlueprintCallable)
    void OnPressedVideoButton();
    
    UFUNCTION(BlueprintCallable)
    void OnPressedSoundButton();
    
    UFUNCTION(BlueprintCallable)
    void OnPressedControlsButton();
    
};

