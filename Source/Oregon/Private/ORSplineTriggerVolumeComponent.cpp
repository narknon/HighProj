#include "ORSplineTriggerVolumeComponent.h"

void UORSplineTriggerVolumeComponent::BuildIfUnbuilt() {
}

void UORSplineTriggerVolumeComponent::BuildCylinderList() {
}

UORSplineTriggerVolumeComponent::UORSplineTriggerVolumeComponent() {
    this->MinIntendedCylinderLength = 100.00f;
    this->CylinderSize = 1024.00f;
    this->TanDotThreshold = 0.95f;
    this->SplineLength = 0.00f;
}

