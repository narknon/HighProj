#include "DeformationDataAsset.h"

UDeformationDataAsset::UDeformationDataAsset() {
    this->DefaultTranslationSpace = BCS_ParentBoneSpace;
    this->DefaultRotationSpace = BCS_BoneSpace;
    this->DefaultScaleSpace = BCS_ParentBoneSpace;
    this->HeightScaleMultiplier = 1.00f;
    this->SpeedScaleMultiplier = 1.00f;
    this->CachedDefaultTranslationSpace = BCS_ParentBoneSpace;
    this->CachedDefaultRotationSpace = BCS_BoneSpace;
    this->CachedDefaultScaleSpace = BCS_ParentBoneSpace;
}

