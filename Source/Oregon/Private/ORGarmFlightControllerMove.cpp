#include "ORGarmFlightControllerMove.h"

FORGarmFlightControllerMove::FORGarmFlightControllerMove() {
    this->FacingType = EORGarmFlightControllerMoveFacingType::FacePlayer;
    this->bDisableTilt = false;
    this->AccelerationOverride = 0.00f;
    this->DecelerationOverride = 0.00f;
    this->MaxSpeedOverride = 0.00f;
    this->SpinRateOverride = 0.00f;
    this->PitchOverride = 0.00f;
}

