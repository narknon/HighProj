#include "ORGravityFuckeryComponent.h"

void UORGravityFuckeryComponent::ResetFuckeryTimer() {
}

void UORGravityFuckeryComponent::EnableGravityFuckery() {
}

void UORGravityFuckeryComponent::DisableGravityFuckery() {
}

UORGravityFuckeryComponent::UORGravityFuckeryComponent() {
    this->bEnableFuckery = true;
    this->bIsEnabled = true;
    this->MaxGravity = 7000.00f;
    this->MinGravity = 50.00f;
    this->MaxVelocity = 800.00f;
    this->MinVelocity = 20.00f;
    this->LateralDrag = 15.00f;
    this->MaxTime = 10.00f;
}

