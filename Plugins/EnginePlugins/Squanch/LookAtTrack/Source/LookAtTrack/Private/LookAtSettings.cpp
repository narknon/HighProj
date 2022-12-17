#include "LookAtSettings.h"

FLookAtSettings::FLookAtSettings() {
    this->bUseSeperateMinMaxDeflection = false;
    this->MaxDeflectionX = 0.00f;
    this->MinDeflectionX = 0.00f;
    this->MaxDeflectionY = 0.00f;
    this->MinDeflectionY = 0.00f;
    this->AngleOffsetX = 0.00f;
    this->AngleOffsetY = 0.00f;
    this->LookAtPct = 0.00f;
    this->bForceHorizontalOrientation = false;
    this->XAcceleration = 0.00f;
    this->YAcceleration = 0.00f;
    this->XDeceleration = 0.00f;
    this->YDeceleration = 0.00f;
    this->XSpeed = 0.00f;
    this->YSpeed = 0.00f;
    this->XMaxSpeed = 0.00f;
    this->YMaxSpeed = 0.00f;
}

