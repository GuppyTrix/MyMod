#pragma once
#include "CoreMinimal.h"
#include "CrabFocusMenuUI.h"
#include "CrabConfirmationPromptUI.generated.h"

class UButton;
class UTextBlock;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class CRABCHAMPIONS_API UCrabConfirmationPromptUI : public UCrabFocusMenuUI {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* ConfirmationPromptMessageText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UButton* YesButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UButton* NoButton;
    
public:
    UCrabConfirmationPromptUI();

protected:
    UFUNCTION(BlueprintCallable)
    void OnPressedYesButton();
    
    UFUNCTION(BlueprintCallable)
    void OnPressedNoButton();
    
    UFUNCTION(BlueprintCallable)
    void OnHoveredYesButton();
    
    UFUNCTION(BlueprintCallable)
    void OnHoveredNoButton();
    
};

