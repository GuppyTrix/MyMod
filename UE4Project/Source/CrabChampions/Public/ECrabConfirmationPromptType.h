#pragma once
#include "CoreMinimal.h"
#include "ECrabConfirmationPromptType.generated.h"

UENUM(BlueprintType)
enum class ECrabConfirmationPromptType : uint8 {
    None,
    QuitToLobby,
    BringPartyMembersToLobby,
    QuitToDesktop,
};

