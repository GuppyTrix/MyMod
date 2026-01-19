#pragma once
#include "CoreMinimal.h"
#include "CrabUI.h"
#include "CrabPingUI.generated.h"

class UImage;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class CRABCHAMPIONS_API UCrabPingUI : public UCrabUI {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* PingIconImage;
    
public:
    UCrabPingUI();

};

