#include "TransformInfo.h"

FTransformInfo::FTransformInfo() {
    this->EyeHeight = 0.00f;
    this->FieldOfView = 0.00f;
    this->FiringSpreadMod = 0.00f;
    this->MovementSpreadModifier = NULL;
    this->OverrideTransformTime = 0.00f;
    this->CameraYawRestriction = 0.00f;
    this->AkStateSwitch = NULL;
}

