#include "ORTargetableComponent.h"

void UORTargetableComponent::SetEnabled(const bool bInEnabled) {
}

void UORTargetableComponent::Reinitialize() {
}

void UORTargetableComponent::OnEnableTargetablesWithTag(const FGameplayTag TargetableTag) {
}

void UORTargetableComponent::OnDisableTargetablesWithTag(const FGameplayTag TargetableTag) {
}

bool UORTargetableComponent::IsValidTarget_Implementation() {
    return false;
}

TArray<FVector> UORTargetableComponent::GetTargetVisibilityPoints_Implementation() {
    return TArray<FVector>();
}

FVector UORTargetableComponent::GetTargetVelocity_Implementation() {
    return FVector{};
}

FVector UORTargetableComponent::GetTargetCenter_Implementation() {
    return FVector{};
}

FVector UORTargetableComponent::GetTargetBase_Implementation() {
    return FVector{};
}

FGameplayTagContainer UORTargetableComponent::GetTargetableGameplayTags() const {
    return FGameplayTagContainer{};
}

FVector UORTargetableComponent::GetMeleeTargetLocation_Implementation() {
    return FVector{};
}

bool UORTargetableComponent::GetEnabled() const {
    return false;
}

bool UORTargetableComponent::CanBeFiredAt_Implementation() {
    return false;
}

UORTargetableComponent::UORTargetableComponent() {
    this->bUseAimAssist = true;
    this->bUseAimAdhesion = true;
    this->bUseAimFriction = true;
    this->bCanBeFiredAt = true;
    this->bEnabled = true;
}

