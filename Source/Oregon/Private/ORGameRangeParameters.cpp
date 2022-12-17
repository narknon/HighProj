#include "ORGameRangeParameters.h"

float UORGameRangeParameters::GetGameRange(EORGameRange Range) {
    return 0.0f;
}

UORGameRangeParameters::UORGameRangeParameters() {
    this->CloseAverage = 1000.00f;
    this->CloseMax = 1500.00f;
    this->MidAverage = 2000.00f;
    this->MidMax = 2500.00f;
    this->LongAverage = 3000.00f;
    this->LongMax = 3500.00f;
}

