#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "CrabUI.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class CRABCHAMPIONS_API UCrabUI : public UUserWidget {
    GENERATED_BODY()
public:
    UCrabUI();

};

