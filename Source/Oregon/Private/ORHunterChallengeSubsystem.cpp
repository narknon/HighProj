#include "ORHunterChallengeSubsystem.h"

class UORHunterChallengeSubsystemHandler;

void UORHunterChallengeSubsystem::UnpauseHunterChallenges() {
}

void UORHunterChallengeSubsystem::Setup() {
}

void UORHunterChallengeSubsystem::ResetLoadedChallenges() {
}

void UORHunterChallengeSubsystem::PauseHunterChallenges() {
}

void UORHunterChallengeSubsystem::OnLoadCompleted() {
}

bool UORHunterChallengeSubsystem::IsInitialized() const {
    return false;
}

bool UORHunterChallengeSubsystem::IsChallengeUIUnlocked(FName DataTableName) {
    return false;
}

bool UORHunterChallengeSubsystem::IsChallengeHiddenFromUI(FName DataTableName) {
    return false;
}

bool UORHunterChallengeSubsystem::IsChallengeCompleted(FName DataTableName) const {
    return false;
}

bool UORHunterChallengeSubsystem::IsChallengeActive(FName DataTableName) {
    return false;
}

void UORHunterChallengeSubsystem::HandleCombatStatProgress(int32 CallbackId, int32 PrevValue, int32 CurrentValue, int32 MaxValue) {
}

int32 UORHunterChallengeSubsystem::GetNumCompletedChallenges() {
    return 0;
}

int32 UORHunterChallengeSubsystem::GetNumActiveChallenges() {
    return 0;
}

UORHunterChallengeSubsystemHandler* UORHunterChallengeSubsystem::GetHandler() const {
    return NULL;
}

TArray<FActiveHunterChallenge> UORHunterChallengeSubsystem::GetActiveChallenges() const {
    return TArray<FActiveHunterChallenge>();
}

bool UORHunterChallengeSubsystem::ChallengesAreLoaded() const {
    return false;
}

void UORHunterChallengeSubsystem::CancelChallenge(int32 CallbackId) {
}

void UORHunterChallengeSubsystem::ActivateHunterChallengeByRowName(FName ChallengeRowName, int32 StartingStatValue) {
}

void UORHunterChallengeSubsystem::ActivateChallenge(FName DataTableRowName, const FGameplayTag& Event, const TArray<FGameplayTag>& TrackedStatTags, int32 MaxValue, int32 StartValue, bool bTrackingEnabled) {
}

UORHunterChallengeSubsystem::UORHunterChallengeSubsystem() {
    this->Handler = NULL;
}

