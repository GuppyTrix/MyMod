#pragma once
#include "CoreMinimal.h"
#include "CrabUI.h"
#include "CrabSoundMenuUI.generated.h"

class UCrabSliderUI;
class UWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class CRABCHAMPIONS_API UCrabSoundMenuUI : public UCrabUI {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UWidget*> SoundMenuFocusableWidgetArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCrabSliderUI* MasterVolumeSlider;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCrabSliderUI* GameplayVolumeSlider;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCrabSliderUI* MusicVolumeSlider;
    
public:
    UCrabSoundMenuUI();

};

