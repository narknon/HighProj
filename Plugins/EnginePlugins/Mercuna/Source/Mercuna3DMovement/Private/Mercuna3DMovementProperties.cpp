#include "Mercuna3DMovementProperties.h"

FMercuna3DMovementProperties::FMercuna3DMovementProperties() {
    this->MaxPitchRate = 0.00f;
    this->MaxYawRate = 0.00f;
    this->MaxRollRate = 0.00f;
    this->MaxAngAccel = 0.00f;
    this->bEnableWorldAccelerationLimits = false;
}

