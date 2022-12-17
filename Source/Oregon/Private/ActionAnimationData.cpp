#include "ActionAnimationData.h"

FActionAnimationData::FActionAnimationData() {
    this->bShouldRandomlyPick = false;
    this->CurrentCycleIndex = 0;
    this->CalculatedRandomizationSum = 0.00f;
}

