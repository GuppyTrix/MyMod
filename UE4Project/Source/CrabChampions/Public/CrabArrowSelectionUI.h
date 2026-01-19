#pragma once
#include "CoreMinimal.h"
#include "CrabUI.h"
#include "CrabArrowSelectionUI.generated.h"

class UButton;
class UTextBlock;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class CRABCHAMPIONS_API UCrabArrowSelectionUI : public UCrabUI {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* CurrentSelectionText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UButton* NextButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UButton* PreviousButton;
    
public:
    UCrabArrowSelectionUI();

protected:
    UFUNCTION(BlueprintCallable)
    void OnPressedPreviousButton();
    
    UFUNCTION(BlueprintCallable)
    void OnPressedNextButton();
    
    UFUNCTION(BlueprintCallable)
    void OnHoveredPreviousButton();
    
    UFUNCTION(BlueprintCallable)
    void OnHoveredNextButton();
    
};

