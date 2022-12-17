#include "ORSaveCheckpoint.h"
#include "ORTriggerVolumeComponent.h"
#include "ORStreamingAddressBookCheckpointComponent.h"

class AActor;

bool AORSaveCheckpoint::SetAsCurrentCheckpoint() {
    return false;
}

void AORSaveCheckpoint::SetActive(bool bActive) {
}

void AORSaveCheckpoint::OnOverlap(AActor* OtherActor, int32 VolumeIndex) {
}



bool AORSaveCheckpoint::IsCurrentCheckpoint() const {
    return false;
}

bool AORSaveCheckpoint::IsActive() const {
    return false;
}


AORSaveCheckpoint::AORSaveCheckpoint() : APlayerStart(FObjectInitializer::Get()) {
    this->TriggerVolume = CreateDefaultSubobject<UORTriggerVolumeComponent>(TEXT("TriggerVolume"));
    this->AddressBookComponent = CreateDefaultSubobject<UORStreamingAddressBookCheckpointComponent>(TEXT("AddressBookComponent"));
    this->bForceActivateOnBeginPlay = true;
}

