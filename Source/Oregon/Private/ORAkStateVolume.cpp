#include "ORAkStateVolume.h"
#include "ORTriggerVolumeComponent.h"

class AActor;

void AORAkStateVolume::TriggerComponent_OnEntered(AActor* OtherActor, int32 VolumeIndex) {
}

UORTriggerVolumeComponent* AORAkStateVolume::GetTriggerComponent() const {
    return NULL;
}

AORAkStateVolume::AORAkStateVolume() {
    this->TriggerComponent = CreateDefaultSubobject<UORTriggerVolumeComponent>(TEXT("Trigger"));
    this->EnteredState = NULL;
}

