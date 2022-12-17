#include "ORStreamingWarpBaseAnchor.h"
#include "Components/SceneComponent.h"
#include "ORStreamingAddressBookAnchorComponent.h"

class UWorld;





bool AORStreamingWarpBaseAnchor::HasGetCurrentlyLoadedWarpBaseLevel() const {
    return false;
}


TSoftObjectPtr<UWorld> AORStreamingWarpBaseAnchor::GetCurrentlyLoadedWarpBaseLevel() const {
    return NULL;
}

AORStreamingWarpBaseAnchor::AORStreamingWarpBaseAnchor() {
    this->SceneRoot = CreateDefaultSubobject<USceneComponent>(TEXT("SceneRoot"));
    this->AddressBookComponent = CreateDefaultSubobject<UORStreamingAddressBookAnchorComponent>(TEXT("AddressBookComponent"));
    this->bLoadingReady = true;
}

