#include "ORTrapSequenceData.h"

FORTrapSequenceData::FORTrapSequenceData() {
    this->TrapActivationType = EORTrapSequenceRunType::Simultaneous;
    this->DelayBetweenTrapActivation = 0.00f;
    this->RespectTrapStartDelayTimes = false;
    this->TrapStartDelayOverride = 0.00f;
}

