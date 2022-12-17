#include "ORAchievementSubsystem.h"

class UORAchievementSubsystemHandler;

bool UORAchievementSubsystem::StatBasedAchievementsAreLoaded() const {
    return false;
}

void UORAchievementSubsystem::Setup() {
}

void UORAchievementSubsystem::ResetLoadedStatBasedAchievements() {
}

void UORAchievementSubsystem::MarkAchievementAsCompleted(FName DataTableRowName) {
}

bool UORAchievementSubsystem::IsStatBasedAchievementActive(FName DataTableName) {
    return false;
}

bool UORAchievementSubsystem::IsInitialized() const {
    return false;
}

bool UORAchievementSubsystem::IsAchievementCompleted(FName DataTableName) const {
    return false;
}

void UORAchievementSubsystem::HandleCombatStatProgress(int32 CallbackId, int32 PrevValue, int32 CurrentValue, int32 MaxValue) {
}

int32 UORAchievementSubsystem::GetNumCompletedAchievements() {
    return 0;
}

int32 UORAchievementSubsystem::GetNumActiveStatBasedAchievements() {
    return 0;
}

UORAchievementSubsystemHandler* UORAchievementSubsystem::GetHandler() const {
    return NULL;
}

TArray<FActiveStatBasedAchievement> UORAchievementSubsystem::GetActiveStatBasedAchievements() const {
    return TArray<FActiveStatBasedAchievement>();
}

void UORAchievementSubsystem::CancelStatBasedAchievements(int32 CallbackId) {
}

void UORAchievementSubsystem::AwardAchievement(FName DataTableRowName) {
}

void UORAchievementSubsystem::AddToAchievementProgress(FName DataTableName, int32 Progress) {
}

void UORAchievementSubsystem::ActivateStatBasedAchievementByRowName(FName ChallengeRowName, int32 StartingStatValue) {
}

void UORAchievementSubsystem::ActivateStatBasedAchievement(FName DataTableRowName, const FGameplayTag& Event, const TArray<FGameplayTag>& TrackedStatTags, int32 MaxValue, int32 StartValue, bool bTrackingEnabled) {
}

UORAchievementSubsystem::UORAchievementSubsystem() {
    this->Handler = NULL;
}

