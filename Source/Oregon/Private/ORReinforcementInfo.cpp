#include "ORReinforcementInfo.h"

FORReinforcementInfo::FORReinforcementInfo() {
    this->ReinforceWaveItemDropOverrideTable = NULL;
    this->ReinforceTrigger = EORSpawnTriggerTypes::EST_Automatic_FractionKilled_Wave;
    this->ReinforceTriggerValue = 0.00f;
    this->ReinforceCount = 0;
}

