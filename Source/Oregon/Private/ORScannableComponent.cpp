#include "ORScannableComponent.h"

void UORScannableComponent::SetEnabled(const bool NewEnabled) {
}

void UORScannableComponent::PingScannable(const float PingTime) {
}

void UORScannableComponent::OnPlayerCombatStateChanged(const bool bInCombat) {
}

void UORScannableComponent::MinimizeInfoPanel() {
}

void UORScannableComponent::MaximizeInfoPanel() {
}

FGameplayTagContainer UORScannableComponent::GetScannableGameplayTags() {
    return FGameplayTagContainer{};
}

bool UORScannableComponent::GetScannableActivated() const {
    return false;
}

FVector UORScannableComponent::GetInfoPanelWidgetLocation() {
    return FVector{};
}

bool UORScannableComponent::GetEnabled() const {
    return false;
}

void UORScannableComponent::EndFocus() {
}

void UORScannableComponent::DeactivateScannable() {
}

void UORScannableComponent::DeactivateInfoPanelWidget() {
}

void UORScannableComponent::DeactivateHighlight() {
}

void UORScannableComponent::BeginFocus() {
}

void UORScannableComponent::ActivateScannable() {
}

void UORScannableComponent::ActivateInfoPanelWidget() {
}

void UORScannableComponent::ActivateHighlight() {
}

UORScannableComponent::UORScannableComponent() {
    this->IsEnabled = true;
    this->UseInfoPanel = false;
}

