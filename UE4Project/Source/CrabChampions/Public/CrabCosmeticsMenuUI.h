#pragma once
#include "CoreMinimal.h"
#include "CrabFocusMenuUI.h"
#include "Templates/SubclassOf.h"
#include "CrabCosmeticsMenuUI.generated.h"

class ACrabCosmeticC;
class UButton;
class UCrabCosmeticSlotUI;
class UProgressBar;
class UTextBlock;
class UUniformGridPanel;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class CRABCHAMPIONS_API UCrabCosmeticsMenuUI : public UCrabFocusMenuUI {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ACrabCosmeticC* CosmeticC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UCrabCosmeticSlotUI> CosmeticSlotUIToSpawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUniformGridPanel* CosmeticsUniformGridPanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UButton* CrabSkinsButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UButton* WeaponSkinsButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UCrabCosmeticSlotUI* SelectedCosmeticSlotUI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* CosmeticNameText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* ChallengeDescriptionText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* ChallengeProgressText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* ChallengeGoalText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UProgressBar* ChallengePB;
    
public:
    UCrabCosmeticsMenuUI();

protected:
    UFUNCTION(BlueprintCallable)
    void OnPressedWeaponSkinsButton();
    
    UFUNCTION(BlueprintCallable)
    void OnPressedCrabSkinsButton();
    
};

