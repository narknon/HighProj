#include "BTT_Garmantuous_P2Charge.h"

void UBTT_Garmantuous_P2Charge::HandleIntroTimerFinished() {
}

void UBTT_Garmantuous_P2Charge::HandleChargeComplete() {
}

UBTT_Garmantuous_P2Charge::UBTT_Garmantuous_P2Charge() {
    this->bWaitForMove = false;
    this->EndDistanceFromPlayerMin = 2000.00f;
    this->EndDistanceFromPlayerMax = 6000.00f;
    this->TravelDistanceMin = 5000.00f;
    this->TravelDistanceMax = 8000.00f;
    this->JukeOffsetDistance = 1000.00f;
    this->GarmController = NULL;
}

