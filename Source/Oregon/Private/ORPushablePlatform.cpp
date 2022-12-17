#include "ORPushablePlatform.h"
#include "ORTriggerVolumeComponent.h"

class AActor;
class USceneComponent;

void AORPushablePlatform::TriggerRotation(USceneComponent* HitComponent, bool bLeftRotation) {
}

void AORPushablePlatform::TriggerOverlapEnd(AActor* OtherActor, int32 VolumeIndex) {
}

void AORPushablePlatform::TriggerOverlapBegin(AActor* OtherActor, int32 VolumeIndex) {
}

AORPushablePlatform::AORPushablePlatform() {
    this->OverlapTrigger = CreateDefaultSubobject<UORTriggerVolumeComponent>(TEXT("OverlapTrigger"));
    this->LaunchMagnitude = 1500.00f;
}

