#include "ORAcidPool.h"
#include "ORTriggerVolumeComponent.h"

class AActor;
class APawn;

void AORAcidPool::RemoveCircleAcid(const FVector& CenterLocation, float Radius) {
}

bool AORAcidPool::IsAcidAtLocation(const FVector& Location) const {
    return false;
}

void AORAcidPool::HandleLeft(AActor* SourceActor, int32 VolumeIndex) {
}

void AORAcidPool::HandleEntered(AActor* SourceActor, int32 VolumeIndex) {
}

void AORAcidPool::DecayAcid(float Value) {
}

void AORAcidPool::AddRingAcid(const FVector& CenterLocation, float innerRadius, float Radius, APawn* AcidInstigator) {
}

void AORAcidPool::AddCircleAcid(const FVector& CenterLocation, float Radius, APawn* AcidInstigator) {
}

AORAcidPool::AORAcidPool() {
    this->TriggerVolume = CreateDefaultSubobject<UORTriggerVolumeComponent>(TEXT("VolumeComponent"));
    this->AcidGameplayEffect = NULL;
    this->AcidApplicationInterval = 0.50f;
    this->DefaultProjectileRemoveRadius = 3.00f;
    this->InitialInstigator = NULL;
    this->CircularMaskCenter = NULL;
    this->CircularMaskRadius = 0.00f;
    this->AcidApplicationTimer = 0.00f;
}

