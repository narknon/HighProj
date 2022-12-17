#include "ORAIFlyingCharacterMovementComponent.h"

void UORAIFlyingCharacterMovementComponent::SetVelocity(FVector NewVelocity) {
}

void UORAIFlyingCharacterMovementComponent::SetNewMovementProperties(const FMercuna3DMovementProperties& NewMovementProperties) {
}

void UORAIFlyingCharacterMovementComponent::SetAngularVelocity(FVector NewAngVel) {
}

FVector UORAIFlyingCharacterMovementComponent::GetLocalVelocity() const {
    return FVector{};
}

UORAIFlyingCharacterMovementComponent::UORAIFlyingCharacterMovementComponent() {
    this->NavCorrectionMaxDistance = 5000.00f;
    this->bPositionCorrected = false;
    this->MercunaNavComponent = NULL;
}

