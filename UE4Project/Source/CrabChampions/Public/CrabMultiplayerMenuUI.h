#pragma once
#include "CoreMinimal.h"
#include "CrabFocusMenuUI.h"
#include "Templates/SubclassOf.h"
#include "CrabMultiplayerMenuUI.generated.h"

class UButton;
class UCrabArrowSelectionUI;
class UCrabInviteFriendRowUI;
class UCrabJoinedPlayerRowUI;
class UScrollBox;
class UTextBlock;
class UVerticalBox;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class CRABCHAMPIONS_API UCrabMultiplayerMenuUI : public UCrabFocusMenuUI {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCrabArrowSelectionUI* QuickplayDifficultyAS;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UButton* QuickplayButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* QuickplayButtonText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UScrollBox* FriendsScrollBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UCrabInviteFriendRowUI> InviteFriendRowUIToSpawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVerticalBox* JoinedPlayersVerticalBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UCrabJoinedPlayerRowUI> JoinedPlayerRowUIToSpawn;
    
public:
    UCrabMultiplayerMenuUI();

protected:
    UFUNCTION(BlueprintCallable)
    void OnPressedQuickplayButton();
    
    UFUNCTION(BlueprintCallable)
    void OnHoveredQuickplayButton();
    
};

