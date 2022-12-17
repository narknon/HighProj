#include "OR3PAnimInstance_Merk.h"

UOR3PAnimInstance_Merk::UOR3PAnimInstance_Merk() {
    this->bIsMovingOrCovering = false;
    this->AttractionPointCoverType = EAttractionPointCoverType::None;
    this->AttractionPointCornerCoverType = EAttractionPointCornerCoverType::None;
    this->ActiveAimOffset = NULL;
    this->StandingAimOffset = NULL;
    this->LowCoverAimOffset = NULL;
}

