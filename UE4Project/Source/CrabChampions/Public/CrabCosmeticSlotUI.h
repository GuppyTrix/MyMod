#pragma once
#include "CoreMinimal.h"
#include "CrabChallenge.h"
#include "CrabUI.h"
#include "CrabCosmeticSlotUI.generated.h"

class UBorder;
class UButton;
class UCrabCosmeticsMenuUI;
class UImage;
class UOverlay;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class CRABCHAMPIONS_API UCrabCosmeticSlotUI : public UCrabUI {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FCrabChallenge ChallengeToUnlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UCrabCosmeticsMenuUI* OwningCosmeticsMenuUI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UButton* SlotButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* SlotIconImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOverlay* SlotLockedOverlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBorder* SlotSelectedBorder;
    
public:
    UCrabCosmeticSlotUI();

protected:
    UFUNCTION(BlueprintCallable)
    void OnPressedSlotButton();
    
    UFUNCTION(BlueprintCallable)
    void OnHoveredSlotButton();
    
};

