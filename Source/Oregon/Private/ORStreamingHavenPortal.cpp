#include "ORStreamingHavenPortal.h"
#include "Components/SceneComponent.h"
#include "ORTriggerVolumeComponent.h"

class AActor;


void AORStreamingHavenPortal::HandleEntered(AActor* Actor, int32 VolumeIndex) {
}

void AORStreamingHavenPortal::DoTeleport() {
}

AORStreamingHavenPortal::AORStreamingHavenPortal() {
    this->VolumeComponent = CreateDefaultSubobject<UORTriggerVolumeComponent>(TEXT("VolumeComponent"));
    this->ReturnLocation = CreateDefaultSubobject<USceneComponent>(TEXT("ReturnLocation"));
    this->bReturnPortal = false;
}

