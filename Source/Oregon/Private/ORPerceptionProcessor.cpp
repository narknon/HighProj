#include "ORPerceptionProcessor.h"

FORPerceptionProcessor::FORPerceptionProcessor() {
    this->TimeActiveAfterLastStimulus = 0.00f;
    this->bAlwaysSendPlayerLosLossUpdates = false;
    this->bUseLosResponseTimeCurve = false;
}

