#include "CrabGS.h"
#include "Net/UnrealNetwork.h"




ACrabGS::ACrabGS(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}


void ACrabGS::OnRep_MinigameScore() {
}

void ACrabGS::OnRep_MatchState() {
}

void ACrabGS::OnRep_Gauntlet() {
}

void ACrabGS::OnRep_DifficultyModifiers() {
}

void ACrabGS::OnRep_Difficulty() {
}

void ACrabGS::OnRep_CurrentTime() {
}

void ACrabGS::OnRep_CurrentIslandTimeRemaining() {
}

void ACrabGS::OnRep_CurrentCountdown() {
}

void ACrabGS::OnRep_CountdownDifficultyModifier() {
}

void ACrabGS::OnRep_ChallengeModifiers() {
}

void ACrabGS::OnRep_BlessingProgress() {
}

void ACrabGS::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ACrabGS, MatchState);
    DOREPLIFETIME(ACrabGS, bIsTimePaused);
    DOREPLIFETIME(ACrabGS, CurrentTime);
    DOREPLIFETIME(ACrabGS, CurrentCountdown);
    DOREPLIFETIME(ACrabGS, Difficulty);
    DOREPLIFETIME(ACrabGS, DifficultyModifiers);
    DOREPLIFETIME(ACrabGS, CountdownDifficultyModifier);
    DOREPLIFETIME(ACrabGS, BiomeOrder);
    DOREPLIFETIME(ACrabGS, Biome);
    DOREPLIFETIME(ACrabGS, CurrentIsland);
    DOREPLIFETIME(ACrabGS, CurrentIslandType);
    DOREPLIFETIME(ACrabGS, CurrentIslandStartTime);
    DOREPLIFETIME(ACrabGS, CurrentIslandTimeRemaining);
    DOREPLIFETIME(ACrabGS, XLLevel);
    DOREPLIFETIME(ACrabGS, ChallengeModifiers);
    DOREPLIFETIME(ACrabGS, Blessing);
    DOREPLIFETIME(ACrabGS, BlessingProgress);
    DOREPLIFETIME(ACrabGS, BlessingGoal);
    DOREPLIFETIME(ACrabGS, RewardLootPool);
    DOREPLIFETIME(ACrabGS, GauntletCurrentWave);
    DOREPLIFETIME(ACrabGS, GauntletRewards);
    DOREPLIFETIME(ACrabGS, MinigameScore);
}


