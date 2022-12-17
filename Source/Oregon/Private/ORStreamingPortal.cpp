#include "ORStreamingPortal.h"
#include "ORTriggerVolumeComponent.h"
#include "ORPlayerCompassMarkerComponent_Portal.h"
#include "ORStreamingAddressBookPortalComponent.h"
#include "ORStreamingPortalThresholdComponent.h"
#include "Components/StaticMeshComponent.h"
#include "ORStreamingPortalCollisionComponent.h"

class AActor;

void AORStreamingPortal::SetPortalStreamingWithAddress(const FGameplayTag& InPortalTag, const FName& InPortalRegionAddress) {
}

void AORStreamingPortal::SetPortalStreaming(const FGameplayTag& InPortalTag) {
}





void AORStreamingPortal::OnEnteredDiscoveryTrigger(AActor* OtherActor, int32 VolumeIndex) {
}


FGameplayTag AORStreamingPortal::GetPortalTag() const {
    return FGameplayTag{};
}

FGameplayTag AORStreamingPortal::GetDestinationPortalTag() const {
    return FGameplayTag{};
}

void AORStreamingPortal::DiscoverPortal() {
}

void AORStreamingPortal::DebugForceTeleport() {
}

void AORStreamingPortal::ClearPortalStreaming() {
}

AORStreamingPortal::AORStreamingPortal() {
    this->Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
    this->PortalSurface = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Surface"));
    this->PortalSurfaceCollision = CreateDefaultSubobject<UORStreamingPortalCollisionComponent>(TEXT("SurfaceCollision"));
    this->NearPlaneClip = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("NearPlaneClip"));
    this->ThresholdComponent = CreateDefaultSubobject<UORStreamingPortalThresholdComponent>(TEXT("Threshold"));
    this->AddressBookComponent = CreateDefaultSubobject<UORStreamingAddressBookPortalComponent>(TEXT("AddressBookComponent"));
    this->CaptureComponent = NULL;
    this->DiscoveryTrigger = CreateDefaultSubobject<UORTriggerVolumeComponent>(TEXT("DiscoveryTriggerVolume"));
    this->bIsHousePortal = false;
    this->HalfWidth = 0.00f;
    this->HalfHeight = 0.00f;
    this->EyeHeight = 60.00f;
    this->OverrideFOV = 60.00f;
    this->VPWidth = 512;
    this->VPHeight = 1024;
    this->BackOffset = 100.00f;
    this->RandOffset = 15.00f;
    this->bEnableRendering = true;
    this->PortalSurfaceMaterial = NULL;
    this->PortalNearClipMaterial = NULL;
    this->CompassMarker = CreateDefaultSubobject<UORPlayerCompassMarkerComponent_Portal>(TEXT("CompassMarker"));
}

