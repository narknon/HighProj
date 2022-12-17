#include "ORMissionDynamicBlueprintBindingData.h"

FORMissionDynamicBlueprintBindingData::FORMissionDynamicBlueprintBindingData() {
    this->Type = EORMissionState::Inactive;
    this->ActivationType = EORMissionNodeActivationType::RuntimeOnly;
}

