#include "ORScannablesSubsystem.h"

class AActor;
class UORScannableComponent;

bool UORScannablesSubsystem::ScannableAlwaysDeactivated(const FGameplayTagContainer& ScannableTags) const {
    return false;
}

bool UORScannablesSubsystem::ScannableAlwaysActivated(const FGameplayTagContainer& ScannableTags) const {
    return false;
}

void UORScannablesSubsystem::RemoveAlwaysDeactivatedScannableTags(const FGameplayTagContainer& ScannableTags, const FGameplayTagContainer& InstigatingTags) {
}

void UORScannablesSubsystem::RemoveAlwaysActivatedScannableTags(const FGameplayTagContainer& ScannableTags, const FGameplayTagContainer& InstigatingTags) {
}

TMap<FGameplayTag, FGameplayTagContainer> UORScannablesSubsystem::GetAlwaysDeactivatedScannableTags() {
    return TMap<FGameplayTag, FGameplayTagContainer>();
}

TMap<FGameplayTag, FGameplayTagContainer> UORScannablesSubsystem::GetAlwaysActivatedScannableTags() {
    return TMap<FGameplayTag, FGameplayTagContainer>();
}

TArray<UORScannableComponent*> UORScannablesSubsystem::GetAllScannableComponents() {
    return TArray<UORScannableComponent*>();
}

void UORScannablesSubsystem::DeactivateScannablesWithTags(const FGameplayTagContainer& ScannableTags) {
}

void UORScannablesSubsystem::AddAlwaysDeactivatedScannableTags(const FGameplayTagContainer& ScannableTags, const FGameplayTagContainer& InstigatingTags) {
}

void UORScannablesSubsystem::AddAlwaysActivatedScannableTags(const FGameplayTagContainer& ScannableTags, const FGameplayTagContainer& InstigatingTags) {
}

void UORScannablesSubsystem::ActivateScannablesWithTags(const FGameplayTagContainer& ScannableTags, AActor* DistanceCheckActor, float MaxActorDistanceToScannable) {
}

UORScannablesSubsystem::UORScannablesSubsystem() {
}

