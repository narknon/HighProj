#include "ORMantleableSplineComponent.h"

class AActor;

void UORMantleableSplineComponent::OverlapEnd(AActor* OtherActor, int32 VolumeIndex) {
}

void UORMantleableSplineComponent::OverlapBegin(AActor* OtherActor, int32 VolumeIndex) {
}

void UORMantleableSplineComponent::BuildIfUnbuilt() {
}

void UORMantleableSplineComponent::BuildCylinderList() {
}

UORMantleableSplineComponent::UORMantleableSplineComponent() {
    this->MinIntendedCylinderLength = 25.00f;
    this->CylinderSize = 128.00f;
    this->TanDotThreshold = 0.00f;
    this->SplineLength = 0.00f;
    this->bActivateWalkableFloorOverride = true;
}

