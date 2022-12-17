#include "ORPredictProjectilePathParams.h"

FORPredictProjectilePathParams::FORPredictProjectilePathParams() {
    this->bTraceWithCollision = false;
    this->MaxSimTime = 0.00f;
    this->bTraceWithChannel = false;
    this->SimFrequency = 0.00f;
    this->OverrideGravityZ = 0.00f;
    this->DrawDebugType = EDrawDebugTrace::None;
    this->DrawDebugTime = 0.00f;
    this->bTraceComplex = false;
}

