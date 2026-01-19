#pragma once
#include "CoreMinimal.h"
#include "Framework/Commands/InputChord.h"
#include "CrabKeyBind.h"
#include "CrabUI.h"
#include "CrabKeyBindRowUI.generated.h"

class UButton;
class UImage;
class UInputKeySelector;
class UMaterialInterface;
class UTextBlock;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class CRABCHAMPIONS_API UCrabKeyBindRowUI : public UCrabUI {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UButton* KeyboardButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UButton* ControllerButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FCrabKeyBind CurrentKeyBind;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* KeyBindTitleText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInputKeySelector* KeyboardKeySelector;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInputKeySelector* ControllerKeySelector;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* ControllerIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMaterialInterface* ControllerIconMat;
    
public:
    UCrabKeyBindRowUI();

protected:
    UFUNCTION(BlueprintCallable)
    void OnPressedKeyboardKeySelector(FInputChord SelectedKey);
    
    UFUNCTION(BlueprintCallable)
    void OnPressedControllerKeySelector(FInputChord SelectedKey);
    
    UFUNCTION(BlueprintCallable)
    void OnHoveredKeyboardButton();
    
    UFUNCTION(BlueprintCallable)
    void OnHoveredControllerButton();
    
};

