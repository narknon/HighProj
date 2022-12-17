#include "ORCombatStatsSubsystem.h"

bool UORCombatStatsSubsystem::UnpauseTrackingStat(int32 CallbackId) {
    return false;
}

void UORCombatStatsSubsystem::SetCombatStatValue(const FGameplayTag& EventType, const TArray<FGameplayTag>& StatsTags, int32 Count, bool AddToExistingStatTotal) {
}

int32 UORCombatStatsSubsystem::RegisterForStatProgress(const FGameplayTag& EventType, const TArray<FGameplayTag>& StatsTag, int32 CurrentValue, int32 MaxValue, bool bTrackingEnabled, const FORCombatStatDelegate& Callback) {
    return 0;
}

bool UORCombatStatsSubsystem::PauseTrackingStat(int32 CallbackId) {
    return false;
}

bool UORCombatStatsSubsystem::IsInitialized() const {
    return false;
}

void UORCombatStatsSubsystem::CancelStatCallback(int32 CallbackId) {
}

void UORCombatStatsSubsystem::AddCombatStat(const FGameplayTag& EventType, const TArray<FGameplayTag>& StatsTags, int32 Count) {
}

UORCombatStatsSubsystem::UORCombatStatsSubsystem() {
}

