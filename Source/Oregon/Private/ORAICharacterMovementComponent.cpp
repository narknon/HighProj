#include "ORAICharacterMovementComponent.h"

class AActor;

void UORAICharacterMovementComponent::UpdateChargeTargetLocation(const FVector& InChargeTargetLocation) {
}

void UORAICharacterMovementComponent::UpdateChargeSpeed(float Speed) {
}

void UORAICharacterMovementComponent::StopCharacterCharge() {
}

void UORAICharacterMovementComponent::StartFallingKnockup() {
}

void UORAICharacterMovementComponent::StartCharacterChargeRushStraightForward(float ChargeSpeed, bool MaintainVelocity) {
}

void UORAICharacterMovementComponent::StartCharacterChargeRushAtLocation(const FVector& Location, float ChargeSpeed, bool MaintainVelocity, float ChargeRotationRate) {
}

void UORAICharacterMovementComponent::StartCharacterChargeRushAtActor(AActor* TargetActor, float ChargeSpeed, bool MaintainVelocity, float ChargeRotationRate) {
}

void UORAICharacterMovementComponent::StartCharacterChargeActor(AActor* TargetActor, float ChargeSpeed, float ProximityRadiusStop, bool MaintainVelocity) {
}

void UORAICharacterMovementComponent::StartCharacterCharge(FVector Direction, float ChargeSpeed, float ChargeDistance, float ProximityRadiusStop, bool MaintainVelocity) {
}

void UORAICharacterMovementComponent::SetSyncedAnimationRotation(const FRotator& Rotation, float DeadlineSeconds) {
}

void UORAICharacterMovementComponent::SetOffNavMeshAutoKillEnabled(const bool Enabled) {
}

void UORAICharacterMovementComponent::SetHasEverFoundNavMesh(const bool bHasFound) {
}

void UORAICharacterMovementComponent::SetFallingAutoKillEnabled(const bool Enabled) {
}

void UORAICharacterMovementComponent::KillOwningCharacter() {
}

bool UORAICharacterMovementComponent::IsPointReachable(const FVector& Location) {
    return false;
}

bool UORAICharacterMovementComponent::IsCharacterCharging() {
    return false;
}

bool UORAICharacterMovementComponent::IsAirbornOrPendingLaunch() const {
    return false;
}

void UORAICharacterMovementComponent::EndNavWalkingCooldown() {
}

void UORAICharacterMovementComponent::ClearSyncedAnimationRotation() {
}

void UORAICharacterMovementComponent::BeginNavWalkingCooldown(const float CooldownTime, bool bSetMovementWalking) {
}

UORAICharacterMovementComponent::UORAICharacterMovementComponent() {
    this->bAllowStationaryRotation = true;
    this->StandingRotationMaxSpeed = 40.00f;
    this->StandingRotateMinTime = 0.25f;
    this->StandingRotateMinAngle = 45.00f;
    this->AnimationRotationRate = 0.00f;
    this->NavMeshGapRecoveryRadius = 15.00f;
    this->YawRotationAcceleration = 1000.00f;
    this->YawRotationDecceleration = 400.00f;
    this->bAllowCharacterToRotate = true;
    this->bTickAfterDeath = false;
    this->PhysWalkingCollisionProfile = TEXT("Pawn");
    this->NavWalkingCollisionProfile = TEXT("NavWalkingPawn");
    this->NavWalkingSearchRadiusScale = 0.50f;
    this->OffNavMeshAutoKillEnabled = false;
    this->OffNavMeshAutoKillTime = -1.00f;
    this->bFallingAutoKillEnabled = false;
    this->FallingAutoKillTime = -1.00f;
    this->ChargeTargetActor = NULL;
    this->RequestedChargeSpeed = 0.00f;
    this->RequestedChargeRotationRate = 0.00f;
    this->bProbeAheadOfCharge = false;
    this->ChargeProbeDistance = 400.00f;
    this->ChargeProbeRadiusScale = 1.00f;
    this->bUse3DDistanceCheck = false;
    this->StartFallingKnockupTime = -1.00f;
}

