#include "OR3DMapVolume.h"

class AActor;
class AORTriggerVolume;

void AOR3DMapVolume::SetDiscovered(bool bDiscovered) {
}

void AOR3DMapVolume::OnActorExitMapVolume_Implementation(AActor* Actor, AORTriggerVolume* Volume) {
}

void AOR3DMapVolume::OnActorEnterMapVolume_Implementation(AActor* Actor, AORTriggerVolume* Volume) {
}

AOR3DMapVolume::AOR3DMapVolume() {
    this->UsageType = EORMapVolumeUsageType::None;
    this->bUnloadWhenMeshData = false;
    this->bWasDiscovered = false;
}

