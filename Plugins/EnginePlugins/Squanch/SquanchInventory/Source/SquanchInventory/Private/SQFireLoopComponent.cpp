#include "SQFireLoopComponent.h"

void USQFireLoopComponent::TriggerFiringResult_Implementation() {
}

void USQFireLoopComponent::NotifyFireLoopComplete() {
}

bool USQFireLoopComponent::IsReloading() const {
    return false;
}

bool USQFireLoopComponent::IsFiring() const {
    return false;
}

bool USQFireLoopComponent::HasAvailableResource_Implementation() {
    return false;
}

float USQFireLoopComponent::GetFireRateMod_Implementation() {
    return 0.0f;
}

void USQFireLoopComponent::EndFireLoop_Implementation() {
}

bool USQFireLoopComponent::CanFire_Implementation() {
    return false;
}

void USQFireLoopComponent::CancelFireLoop_Implementation() {
}

void USQFireLoopComponent::BeginFireLoop_Implementation() {
}

USQFireLoopComponent::USQFireLoopComponent() {
    this->RequireAnyResourcesToFire = true;
    this->RequireFullResourcesToFire = true;
    this->bIsFiring = false;
    this->bIsReloading = false;
    this->ShouldTriggerReloads = true;
}

