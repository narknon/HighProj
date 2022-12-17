#include "ORMissionWaypoint.h"
#include "Components/SceneComponent.h"
#include "ORTriggerVolumeComponent.h"

class AActor;

void AORMissionWaypoint::SetEnabled(const bool bNewEnabled) {
}

void AORMissionWaypoint::HandleSearchAreaLeft(AActor* Actor, int32 VolumeIndex) {
}

void AORMissionWaypoint::HandleSearchAreaEntered(AActor* Actor, int32 VolumeIndex) {
}

FVector AORMissionWaypoint::GetWidgetLocation() {
    return FVector{};
}

AORMissionWaypoint::AORMissionWaypoint() {
    this->bIsEnabled = true;
    this->bSearchVolumeEnabled = false;
    this->SceneRoot = CreateDefaultSubobject<USceneComponent>(TEXT("SceneRoot"));
    this->SearchAreaVolume = CreateDefaultSubobject<UORTriggerVolumeComponent>(TEXT("SearchAreaVolume"));
    this->bUseOverrideColor = false;
}

