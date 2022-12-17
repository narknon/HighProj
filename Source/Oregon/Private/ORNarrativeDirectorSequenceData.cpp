#include "ORNarrativeDirectorSequenceData.h"

FORNarrativeDirectorSequenceData::FORNarrativeDirectorSequenceData() {
    this->bStayLoaded = false;
    this->bIsCallback = false;
    this->SequenceCooldownTime = 0.00f;
    this->PlayPriority = EORPlayPriority::GamePlayCritical;
    this->PlayBehavior = EORPlayBehavior::PlayOnce;
    this->bDisabled = false;
    this->RequestTimeStamp = 0.00f;
    this->PlayedTimeStamp = 0.00f;
    this->PlayEndedTimeStamp = 0.00f;
    this->LastPlayedIndex = 0;
}

