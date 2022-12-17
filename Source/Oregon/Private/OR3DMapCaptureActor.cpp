#include "OR3DMapCaptureActor.h"
#include "Components/SceneCaptureComponent2D.h"

class AActor;
class AOR3DMapMarker;

void AOR3DMapCaptureActor::UnsnapFromMarker(AOR3DMapMarker* MapMarker) {
}

void AOR3DMapCaptureActor::TeardownLevelCapture() {
}

void AOR3DMapCaptureActor::SnapToMarker(AOR3DMapMarker* MapMarker) {
}

void AOR3DMapCaptureActor::SetupMapMeshActors(const TArray<AActor*>& MapVolumes, const TArray<AActor*>& GateVolumes) {
}

void AOR3DMapCaptureActor::SetupMapLegendMarkers() {
}

void AOR3DMapCaptureActor::SetupLevelCapture() {
}

void AOR3DMapCaptureActor::ResetLevelCaptureData() {
}

void AOR3DMapCaptureActor::OnStreamableMeshesLoaded() {
}

AOR3DMapCaptureActor::AOR3DMapCaptureActor() {
    this->CaptureComponent = CreateDefaultSubobject<USceneCaptureComponent2D>(TEXT("SceneCaptureComponent2D"));
    this->bShouldSnapToNearestMarker = false;
    this->NearestSnapInterval = 2.00f;
    this->SnapOutTolerance = 0.50f;
    this->SnappedMarkerHeightOffset = 500.00f;
    this->MapLegend = NULL;
    this->MapSpriteMarkerMaterial = NULL;
    this->UndiscoveredMeshMaterial = NULL;
    this->DiscoveredMeshMaterial = NULL;
    this->MapPivotRegion = NULL;
    this->SnappedMarkerActor = NULL;
    this->PlayerMarkerActor = NULL;
}

