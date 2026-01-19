#pragma once
#include "CoreMinimal.h"
#include "CrabUI.h"
#include "CrabBlessingUI.generated.h"

class UTextBlock;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class CRABCHAMPIONS_API UCrabBlessingUI : public UCrabUI {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* BlessingText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* BlessingDescriptionText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* BlessingGoalText;
    
public:
    UCrabBlessingUI();

};

