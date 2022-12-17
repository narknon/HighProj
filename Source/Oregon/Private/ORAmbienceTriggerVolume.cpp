#include "ORAmbienceTriggerVolume.h"
#include "ORTriggerVolumeComponent.h"

class AActor;

void AORAmbienceTriggerVolume::TriggerComponent_OnLeft(AActor* OtherActor, int32 VolumeIndex) {
}

void AORAmbienceTriggerVolume::TriggerComponent_OnEntered(AActor* OtherActor, int32 VolumeIndex) {
}

UORTriggerVolumeComponent* AORAmbienceTriggerVolume::GetTriggerComponent() const {
    return NULL;
}

AORAmbienceTriggerVolume::AORAmbienceTriggerVolume() {
    this->TriggerComponent = CreateDefaultSubobject<UORTriggerVolumeComponent>(TEXT("Trigger"));
    this->Priority = 0;
}

