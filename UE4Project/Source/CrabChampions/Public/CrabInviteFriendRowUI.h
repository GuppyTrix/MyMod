#pragma once
#include "CoreMinimal.h"
#include "CrabUI.h"
#include "CrabInviteFriendRowUI.generated.h"

class UButton;
class UTextBlock;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class CRABCHAMPIONS_API UCrabInviteFriendRowUI : public UCrabUI {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* FriendNameText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UButton* InviteButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* InviteButtonText;
    
public:
    UCrabInviteFriendRowUI();

protected:
    UFUNCTION(BlueprintCallable)
    void OnPressedInviteButton();
    
    UFUNCTION(BlueprintCallable)
    void OnHoveredInviteButton();
    
};

