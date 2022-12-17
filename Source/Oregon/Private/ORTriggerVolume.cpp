#include "ORTriggerVolume.h"
#include "ORTriggerVolumeComponent.h"

class AActor;

void AORTriggerVolume::SetEnabled(bool bInEnabled) {
}



bool AORTriggerVolume::IsEnabled() {
    return false;
}

void AORTriggerVolume::HandleLeft(AActor* Actor, int32 VolumeIndex) {
}

void AORTriggerVolume::HandleEntered(AActor* Actor, int32 VolumeIndex) {
}

AORTriggerVolume::AORTriggerVolume() {
    this->VolumeComponent = CreateDefaultSubobject<UORTriggerVolumeComponent>(TEXT("VolumeComponent"));
}

