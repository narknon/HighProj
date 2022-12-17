#include "BoneDeformationData.h"

FBoneDeformationData::FBoneDeformationData() {
    this->TranslationSpace = BCS_WorldSpace;
    this->RotationSpace = BCS_WorldSpace;
    this->ScaleSpace = BCS_WorldSpace;
    this->bAffectsChildScaling = false;
}

