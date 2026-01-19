#pragma once
#include "CoreMinimal.h"
#include "CrabUI.h"
#include "CrabSliderUI.generated.h"

class UProgressBar;
class USlider;
class UTextBlock;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class CRABCHAMPIONS_API UCrabSliderUI : public UCrabUI {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USlider* MainSlider;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UProgressBar* SliderPB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* SliderText;
    
public:
    UCrabSliderUI();

protected:
    UFUNCTION(BlueprintCallable)
    void OnMainSliderValueChanged(float Value);
    
};

