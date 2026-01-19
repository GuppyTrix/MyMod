#pragma once
#include "CoreMinimal.h"
#include "CrabUI.h"
#include "CrabVideoMenuUI.generated.h"

class UCrabArrowSelectionUI;
class UWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class CRABCHAMPIONS_API UCrabVideoMenuUI : public UCrabUI {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UWidget*> VideoMenuFocusableWidgetArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCrabArrowSelectionUI* DisplayModeAS;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCrabArrowSelectionUI* ResolutionAS;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCrabArrowSelectionUI* ResolutionQualityAS;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCrabArrowSelectionUI* FPSLimitAS;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCrabArrowSelectionUI* VSyncAS;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCrabArrowSelectionUI* FieldOfViewAS;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCrabArrowSelectionUI* GraphicsQualityAS;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCrabArrowSelectionUI* WeaponEffectsAS;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCrabArrowSelectionUI* AntiAliasingTypeAS;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCrabArrowSelectionUI* SharpeningAS;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCrabArrowSelectionUI* MotionBlurAS;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCrabArrowSelectionUI* CameraShakeAS;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCrabArrowSelectionUI* HitmarkersAS;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCrabArrowSelectionUI* DamageNumbersAS;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCrabArrowSelectionUI* TextChatVisibilityAS;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCrabArrowSelectionUI* ShowFPSAS;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCrabArrowSelectionUI* PauseWhenLosingFocusAS;
    
public:
    UCrabVideoMenuUI();

protected:
    UFUNCTION(BlueprintCallable)
    void SetWeaponEffects(const FString& NewSelection);
    
    UFUNCTION(BlueprintCallable)
    void SetVSync(const FString& NewSelection);
    
    UFUNCTION(BlueprintCallable)
    void SetTextChatVisibility(const FString& NewSelection);
    
    UFUNCTION(BlueprintCallable)
    void SetShowFPS(const FString& NewSelection);
    
    UFUNCTION(BlueprintCallable)
    void SetSharpening(const FString& NewSelection);
    
    UFUNCTION(BlueprintCallable)
    void SetResolutionQuality(const FString& NewSelection);
    
    UFUNCTION(BlueprintCallable)
    void SetResolution(const FString& NewSelection);
    
    UFUNCTION(BlueprintCallable)
    void SetPauseWhenLosingFocus(const FString& NewSelection);
    
    UFUNCTION(BlueprintCallable)
    void SetMotionBlur(const FString& NewSelection);
    
    UFUNCTION(BlueprintCallable)
    void SetHitmarkers(const FString& NewSelection);
    
    UFUNCTION(BlueprintCallable)
    void SetGraphicsQuality(const FString& NewSelection);
    
    UFUNCTION(BlueprintCallable)
    void SetFPSLimit(const FString& NewSelection);
    
    UFUNCTION(BlueprintCallable)
    void SetFieldOfView(const FString& NewSelection);
    
    UFUNCTION(BlueprintCallable)
    void SetDisplayMode(const FString& NewSelection);
    
    UFUNCTION(BlueprintCallable)
    void SetDamageNumbers(const FString& NewSelection);
    
    UFUNCTION(BlueprintCallable)
    void SetCameraShake(const FString& NewSelection);
    
    UFUNCTION(BlueprintCallable)
    void SetAntiAliasingType(const FString& NewSelection);
    
};

