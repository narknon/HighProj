#include "ORSplineTriggerVolume.h"
#include "ORSplineTriggerVolumeComponent.h"

class AActor;

void AORSplineTriggerVolume::SetEnabled(bool bInEnabled) {
}



bool AORSplineTriggerVolume::IsEnabled() {
    return false;
}

void AORSplineTriggerVolume::HandleLeft(AActor* Actor, int32 VolumeIndex) {
}

void AORSplineTriggerVolume::HandleEntered(AActor* Actor, int32 VolumeIndex) {
}

AORSplineTriggerVolume::AORSplineTriggerVolume() {
    this->SplineTriggerVolume = CreateDefaultSubobject<UORSplineTriggerVolumeComponent>(TEXT("SplineTrigger"));
}

