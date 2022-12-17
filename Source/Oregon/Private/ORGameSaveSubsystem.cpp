#include "ORGameSaveSubsystem.h"

TSet<FName> UORGameSaveSubsystem::GetDiscoveredRegions() {
    return TSet<FName>();
}

TSet<FGameplayTag> UORGameSaveSubsystem::GetDiscoveredPortals() {
    return TSet<FGameplayTag>();
}

TSet<FName> UORGameSaveSubsystem::GetDiscoveredPOIs() {
    return TSet<FName>();
}

TSet<FName> UORGameSaveSubsystem::GetCompletedHunterChallenges() {
    return TSet<FName>();
}

TSet<FName> UORGameSaveSubsystem::GetCompletedAchievements() {
    return TSet<FName>();
}

void UORGameSaveSubsystem::DebugClearProfile() {
}

void UORGameSaveSubsystem::ClearSave(bool bOnlyClearSwap) {
}

UORGameSaveSubsystem::UORGameSaveSubsystem() {
}

