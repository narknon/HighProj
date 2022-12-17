#include "ORTrapTriggerVolume_ElectricBase.h"
#include "ORTriggerVolumeComponent.h"

class AActor;



void AORTrapTriggerVolume_ElectricBase::HandleLeftWarmupVolume(AActor* Actor, int32 VolumeIndex) {
}

void AORTrapTriggerVolume_ElectricBase::HandleEnteredWarmupVolume(AActor* Actor, int32 VolumeIndex) {
}

AORTrapTriggerVolume_ElectricBase::AORTrapTriggerVolume_ElectricBase() {
    this->WarmupVolumeComponent = CreateDefaultSubobject<UORTriggerVolumeComponent>(TEXT("WarmupVolumeComponent"));
}

