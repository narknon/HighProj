#include "SQProjectileMovementComponent.h"

class USceneComponent;

void USQProjectileMovementComponent::SetNewVelocity(const FVector NewVelocity) {
}

void USQProjectileMovementComponent::SetHomingTarget(USceneComponent* NewHomingTargetComponent) {
}

float USQProjectileMovementComponent::GetTimeForDistanceTraveled(float DistanceTraveled) {
    return 0.0f;
}

float USQProjectileMovementComponent::GetMaxTravelDistance() const {
    return 0.0f;
}

float USQProjectileMovementComponent::GetDistanceTraveledForTime(float Time) {
    return 0.0f;
}

USQProjectileMovementComponent::USQProjectileMovementComponent() {
    this->bEnableProjectileAcceleration = false;
    this->MaxTravelDistance = 4096.00f;
    this->bUseHomingWithGravity = false;
    this->ForceHomingVelocityDistance = 0.00f;
    this->ForceHomingHitDistance = 0.00f;
    this->bTraceComplex = true;
}

