#include "CrabPC.h"




ACrabPC::ACrabPC(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}


void ACrabPC::ServerUploadLobbyStats_Implementation(const FCrabLobbyStats& LobbyStats) {
}

void ACrabPC::ServerSpectateNextPlayer_Implementation() {
}

void ACrabPC::ServerSpawnKeyTotemPickup_Implementation(ACrabTotem* KeyTotem, UCrabPickupDA* PickupToSpawn) {
}

void ACrabPC::ServerSendChatMessage_Implementation(const FString& ChatMessage) {
}

void ACrabPC::ServerRestoreAutoSave_Implementation(const FCrabAutoSave& AutoSave) {
}

void ACrabPC::ClientUploadLobbyStats_Implementation() {
}

void ACrabPC::ClientStartSlomoRamp_Implementation() {
}

void ACrabPC::ClientShowLoadingScreenUI_Implementation() {
}

void ACrabPC::ClientShowCosmeticsMenuUI_Implementation() {
}

void ACrabPC::ClientSetIsCharacterInputEnabled_Implementation(bool bNewIsCharacterInputEnabled) {
}

void ACrabPC::ClientRefreshPSUI_Implementation() {
}

void ACrabPC::ClientPlayerLeftGame_Implementation() {
}

void ACrabPC::ClientOnUpdatedOutOfBoundsState_Implementation(ECrabOutOfBoundsState NewOutOfBoundsState) {
}

void ACrabPC::ClientOnTookDamage_Implementation(ECrabDamageHitType DamageHitType) {
}

void ACrabPC::ClientOnReceivedChatMessage_Implementation(ACrabPS* PS, const FString& ChatMessage) {
}

void ACrabPC::ClientOnPickedUpPickup_Implementation(UCrabPickupDA* PickupDA, uint8 Level) {
}

void ACrabPC::ClientOnInteractedWithKeyTotem_Implementation(ACrabTotem* KeyTotem) {
}

void ACrabPC::ClientOnEnteredPortal_Implementation(const FCrabNextIslandInfo& NextIslandInfo, bool bSaveAutoSave) {
}

void ACrabPC::ClientOnEliminated_Implementation(const FString& EliminationCause) {
}

void ACrabPC::ClientOnClearedIsland_Implementation(bool bWasFlawlessClear) {
}

void ACrabPC::ClientNotifyDamageDealt_Implementation(const FCrabDamageInfo& DamageInfo, ECrabDamageHitType DamageHitType) {
}

void ACrabPC::ClientLeaveGame_Implementation() {
}

void ACrabPC::ClientInventoryEvent_Implementation(const FString& InventoryEventMessage) {
}

void ACrabPC::ClientClearAutoSave_Implementation() {
}


