#include "ORAnchorPoint.h"



void AORAnchorPoint::SetEnabled(const bool bIsEnabled) {
}

AORAnchorPoint::AORAnchorPoint() {
    this->BaseMovementSpeed = 100.00f;
    this->BaseRotationSpeed = 20.00f;
    this->MovementThresholdOffset = 20.00f;
    this->MovementThresholdAngle = 120.00f;
    this->bUseAmbientMovement = false;
    this->Mesh = NULL;
    this->Anchor = NULL;
    this->AnimInst = NULL;
    this->CurrentMovementSpeed = 100.00f;
    this->CurrentRotationSpeed = 20.00f;
    this->AnimSpeedScalar = 10.00f;
    this->AnimForwardSpeed = 0.00f;
    this->AnimSideSpeed = 0.00f;
    this->bIsHoldingPosition = false;
    this->bIsPulling = false;
    this->bWasShot = false;
    this->bEnabled = true;
}

