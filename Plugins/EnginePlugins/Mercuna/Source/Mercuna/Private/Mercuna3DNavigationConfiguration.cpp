#include "Mercuna3DNavigationConfiguration.h"

FMercuna3DNavigationConfiguration::FMercuna3DNavigationConfiguration() {
    this->MaxPitch = 0.00f;
    this->MaxRoll = 0.00f;
    this->MoveOnlyInLookDirection = false;
    this->MoveInForwardDirection = EMercunaMoveInForwardDirection::Always;
    this->StopAtDestination = false;
    this->HeightChangePenalty = 0.00f;
    this->SmoothPaths = false;
    this->LookAheadTime = 0.00f;
    this->RollAnticipationTime = 0.00f;
}

