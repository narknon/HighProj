#include "ORPerceptionProcessorState.h"

FORPerceptionProcessorState::FORPerceptionProcessorState() {
    this->CurrentHostileAwareness = EORAIHostileAwareness::EHA_Unaware;
    this->CurrentStateEnterTime = 0.00f;
    this->LastHostileStimulusTime = 0.00f;
    this->bSentNoStimuliEvent = false;
}

