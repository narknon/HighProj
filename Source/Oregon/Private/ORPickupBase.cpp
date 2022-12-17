#include "ORPickupBase.h"
#include "ORTriggerVolumeComponent.h"
#include "ORScannableComponent.h"
#include "Components/StaticMeshComponent.h"

class AActor;
class AORCharacter;

bool AORPickupBase::TryPickUp_Implementation(AORCharacter* PickingUpCharacter) {
    return false;
}

void AORPickupBase::SetStackCount_Implementation(int32 Stacks) {
}

bool AORPickupBase::ReturnToPool() {
    return false;
}



void AORPickupBase::OnOverlap(AActor* OtherActor, int32 VolumeIndex) {
}

void AORPickupBase::HandleSpawnedFromPool() {
}

void AORPickupBase::HandleReturnToPool() {
}

bool AORPickupBase::CanPickUp_Implementation(AORCharacter* Character) {
    return false;
}

void AORPickupBase::AttemptPickup(AORCharacter* Character) {
}

AORPickupBase::AORPickupBase() {
    this->Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
    this->TriggerVolume = CreateDefaultSubobject<UORTriggerVolumeComponent>(TEXT("TriggerVolume"));
    this->PickupAudioEvent = NULL;
    this->PickupVisualEvent = NULL;
    this->bUseItemPooling = true;
    this->ScannableComponent = CreateDefaultSubobject<UORScannableComponent>(TEXT("ScannableComponent"));
}

