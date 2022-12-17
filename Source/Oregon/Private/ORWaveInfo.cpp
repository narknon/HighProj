#include "ORWaveInfo.h"

FORWaveInfo::FORWaveInfo() {
    this->WaveItemDropOverrideTable = NULL;
    this->WarpTicketClass = NULL;
    this->WaveStartDelay = 0.00f;
    this->AggroSlotsOverride = 0;
    this->AdvanceTrigger = EORSpawnTriggerTypes::EST_Automatic_FractionKilled_Wave;
    this->AdvanceTriggerValue = 0.00f;
    this->bAllowAttractionPointsOutsidePartyHomeAreas = false;
}

