#include "ORIKRuntimeData.h"

FORIKRuntimeData::FORIKRuntimeData() {
    this->bIsIKEnabled = false;
    this->bIsHandIKEnabled = false;
    this->IKInterpolationSpeed = 0.00f;
    this->HandIKInterpolationSpeed = 0.00f;
    this->IKTraceDistanceMultiplier = 0.00f;
    this->HandIKTraceDistanceMultiplier = 0.00f;
    this->IKOffsetTolerance = 0.00f;
    this->IKRotationTolerance = 0.00f;
    this->IKTraceMagnitude = 0.00f;
    this->HandIKTraceMagnitude = 0.00f;
    this->ActorZScale = 0.00f;
    this->IKTraceDistance = 0.00f;
    this->IKOffsetRightFoot = 0.00f;
    this->IKOffsetLeftFoot = 0.00f;
    this->IKOffsetRightHand = 0.00f;
    this->IKOffsetLeftHand = 0.00f;
}

