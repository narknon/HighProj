#include "ORMusicTriggerVolume.h"
#include "ORTriggerVolumeComponent.h"

class AActor;
class UAkStateValue;

void AORMusicTriggerVolume::TriggerComponent_OnLeft(AActor* OtherActor, int32 VolumeIndex) {
}

void AORMusicTriggerVolume::TriggerComponent_OnEntered(AActor* OtherActor, int32 VolumeIndex) {
}

UORTriggerVolumeComponent* AORMusicTriggerVolume::GetTriggerComponent() const {
    return NULL;
}

TSoftObjectPtr<UAkStateValue> AORMusicTriggerVolume::GetLevelMusicState() const {
    return NULL;
}

AORMusicTriggerVolume::AORMusicTriggerVolume() {
    this->Priority = 5;
    this->TriggerComponent = CreateDefaultSubobject<UORTriggerVolumeComponent>(TEXT("Trigger"));
}

