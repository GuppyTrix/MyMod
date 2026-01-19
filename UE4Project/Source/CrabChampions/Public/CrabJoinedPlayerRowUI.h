#pragma once
#include "CoreMinimal.h"
#include "CrabUI.h"
#include "CrabJoinedPlayerRowUI.generated.h"

class UTextBlock;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class CRABCHAMPIONS_API UCrabJoinedPlayerRowUI : public UCrabUI {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* PlayerNameText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* PlayerPingText;
    
public:
    UCrabJoinedPlayerRowUI();

};

