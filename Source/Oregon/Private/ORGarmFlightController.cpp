#include "ORGarmFlightController.h"

class AActor;

void UORGarmFlightController::VerticalMove(float Height, const FORGarmFlightControllerMove& InMoveData) {
}

void UORGarmFlightController::TriggerWobble() {
}

void UORGarmFlightController::StrafeMove(float Height, float MinDistancePastPlayer, float MaxDistancePastPlayer, const FORGarmFlightControllerMove& InMoveData) {
}

void UORGarmFlightController::RotationalMove(float MinAngle, float MaxAngle, float MinDistance, float MaxDistance, float MinHeight, float MaxHeight, float ExtraRadius, float ExtraHeight, const FORGarmFlightControllerMove& InMoveData) {
}

void UORGarmFlightController::MoveToActor(AActor* Destination, const FORGarmFlightControllerMove& InMoveData) {
}

bool UORGarmFlightController::IsMoveActive() const {
    return false;
}

void UORGarmFlightController::DebugMove(const FORGarmFlightControllerMove& InMoveData) {
}

UORGarmFlightController::UORGarmFlightController() {
    this->AreaVolume = NULL;
    this->MercunaMoveComp = NULL;
    this->CharacterMovementComp = NULL;
    this->MoveStartTime = 0.00f;
    this->BaseAcceleration = 2000.00f;
    this->BaseDeceleration = 1500.00f;
    this->BaseMaxSpeed = 2000.00f;
    this->BaseSpinSpeed = 600.00f;
    this->RotationBaseAcceleration = 200.00f;
    this->RotationBaseDeceleration = 200.00f;
    this->RotationMaxSpeed = 1000.00f;
    this->GoalRadius = 200.00f;
    this->MaximumPitch = 40.00f;
    this->AccelerationToPitchFactor = 0.01f;
    this->WindResistanceFactor = 0.60f;
    this->WobbleAmount = 15.00f;
    this->WobbleDuration = 3.00f;
    this->MoveStartSFX = NULL;
    this->MoveStopSFX = NULL;
}

