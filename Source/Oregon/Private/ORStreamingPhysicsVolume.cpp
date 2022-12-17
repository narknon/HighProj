#include "ORStreamingPhysicsVolume.h"
#include "ORStreamingPhysicsVolumeComponent.h"

AORStreamingPhysicsVolume::AORStreamingPhysicsVolume() {
    this->Volume = CreateDefaultSubobject<UORStreamingPhysicsVolumeComponent>(TEXT("Volume"));
}

