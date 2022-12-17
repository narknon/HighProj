#include "ORInnerOuterVolumeInterpolator.h"
#include "ORTriggerVolumeComponent.h"

class AActor;

void AORInnerOuterVolumeInterpolator::HandleLeft(AActor* Actor, int32 VolumeIndex) {
}

void AORInnerOuterVolumeInterpolator::HandleEntered(AActor* Actor, int32 VolumeIndex) {
}

AORInnerOuterVolumeInterpolator::AORInnerOuterVolumeInterpolator() {
    this->InnerVolumeComponent = CreateDefaultSubobject<UORTriggerVolumeComponent>(TEXT("InnerVolumeComponent"));
    this->OuterVolumeComponent = CreateDefaultSubobject<UORTriggerVolumeComponent>(TEXT("OuterVolumeComponent"));
}

