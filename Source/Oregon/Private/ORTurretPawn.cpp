#include "ORTurretPawn.h"

class AActor;

void AORTurretPawn::RotateTowardsActor(float DeltaTime, AActor* TargetActor) {
}

AORTurretPawn::AORTurretPawn() {
    this->TargetingVerticalOffset = 0.00f;
    this->MaxPitchPerSecond = 10.00f;
    this->MaxYawPerSecond = 20.00f;
}

