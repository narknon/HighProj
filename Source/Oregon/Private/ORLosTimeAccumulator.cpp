#include "ORLosTimeAccumulator.h"

FORLosTimeAccumulator::FORLosTimeAccumulator() {
    this->LastUpdateTime = 0.00f;
    this->AccumulatedLosTime = 0.00f;
    this->TickedTime = 0.00f;
    this->bHadLosOnLastUpdate = false;
    this->bIsDetected = false;
}

