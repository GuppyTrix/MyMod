#pragma once
#include "CoreMinimal.h"
#include "CrabFocusMenuUI.h"
#include "Templates/SubclassOf.h"
#include "CrabMinigameGameOverUI.generated.h"

class UCrabMinigameGameOverRowUI;
class UTextBlock;
class UVerticalBox;
class UWidgetSwitcher;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class CRABCHAMPIONS_API UCrabMinigameGameOverUI : public UCrabFocusMenuUI {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* MinigameNameText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidgetSwitcher* MinigameGameOverWidgetSwitcher;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* ScoreText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* HighScoreText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVerticalBox* MinigameGameOverRowUIVerticalBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UCrabMinigameGameOverRowUI> MinigameGameOverRowUIToSpawn;
    
public:
    UCrabMinigameGameOverUI();

};

