#include "ORAbilityUsageData.h"

FORAbilityUsageData::FORAbilityUsageData() {
    this->AbilityClass = NULL;
    this->HasFrontalConeRequirement = false;
    this->AbilityFrontConeHalfAngleDegrees = 0.00f;
    this->HasDistanceToTargetRequirement = false;
    this->MinUseDistanceToTarget = 0.00f;
    this->MaxUseDistanceToTarget = 0.00f;
    this->HasHeightOffsetToTargetRequirement = false;
    this->MinHeightOffsetToTarget = 0.00f;
    this->MaxHeightOffsetToTarget = 0.00f;
    this->bRequiresInstigatorOnScreenWhenTargetIsPlayer = false;
    this->RequiresLosToTarget = false;
    this->RequiresLosToTargetOnce = false;
    this->bRequiresNoImmediateObstructions = false;
    this->ObstructionCheckDistance = 0.00f;
    this->MinTimeBeforeReactivate = 0.00f;
    this->bRequiresAttackTypeToken = false;
}

