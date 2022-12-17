#include "ORAbilityRequirementOverrideData.h"

FORAbilityRequirementOverrideData::FORAbilityRequirementOverrideData() {
    this->IgnoreFrontalConeRequirement = false;
    this->IgnoreDistanceToTargetRequirement = false;
    this->IgnoreHeightOffsetToTargetRequirement = false;
    this->IgnoreInstigatorOnScreenWhenTargetIsPlayerRequirement = false;
    this->IgnoreLosToTargetRequirement = false;
    this->IgnoreNoObstructionsRequirement = false;
    this->IgnoreMinTimeBeforeReactivateRequirement = false;
    this->IgnoreAttackTokenRequirement = false;
    this->IgnoreCanActivateAbilityCheck = false;
}

