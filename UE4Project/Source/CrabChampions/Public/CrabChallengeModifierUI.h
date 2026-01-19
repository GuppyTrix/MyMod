#pragma once
#include "CoreMinimal.h"
#include "CrabUI.h"
#include "CrabChallengeModifierUI.generated.h"

class UTextBlock;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class CRABCHAMPIONS_API UCrabChallengeModifierUI : public UCrabUI {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* ChallengeModifierText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* ChallengeModifierDescriptionText;
    
public:
    UCrabChallengeModifierUI();

};

