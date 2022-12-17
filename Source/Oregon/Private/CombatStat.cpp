#include "CombatStat.h"

FCombatStat::FCombatStat() {
    this->CallbackId = 0;
    this->CurrentValue = 0;
    this->MaxValue = 0;
    this->bTrackingEnabled = false;
    this->bCanceled = false;
}

