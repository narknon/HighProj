#include "OR3PAnimInstanceEyeLookAtData.h"

FOR3PAnimInstanceEyeLookAtData::FOR3PAnimInstanceEyeLookAtData() {
    this->BoneIndex = 0;
    this->ParentBoneIndex = 0;
    this->bUseSeperateMinMaxDeflection = false;
    this->MaxDeflectionX = 0.00f;
    this->MinDeflectionX = 0.00f;
    this->MaxDeflectionY = 0.00f;
    this->MinDeflectionY = 0.00f;
    this->EyeAngleSkew = 0.00f;
    this->InterpolationType = BSIT_Average;
    this->InterpSpeed = 0.00f;
    this->bFlipLookDirectionX = false;
    this->bFlipLookDirectionY = false;
    this->bFlipLookDirectionZ = false;
    this->bElipticalClamp = false;
    this->bUseWorldSpace = false;
    this->bUseClampBias = false;
    this->bFlipClampBias = false;
}

