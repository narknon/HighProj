#include "ORFractalManager.h"
#include "Templates/SubclassOf.h"
#include "Components/SceneComponent.h"
#include "ORTriggerVolumeComponent.h"

class AActor;
class AORFractalLayer;

void AORFractalManager::UpdatePlayerScale(float NewScale) {
}

void AORFractalManager::TeleportPlayerToFractal() {
}

void AORFractalManager::ResetPlayerTeleportToDefault() {
}

void AORFractalManager::RegenerateFractalLayers_BP() {
}

void AORFractalManager::RegenerateFractalLayers(TSubclassOf<AORFractalLayer> OverrideLayerClass) {
}

void AORFractalManager::OpenFractalExit() {
}





void AORFractalManager::OnFractalExited(AActor* Actor, int32 VolumeIndex) {
}



int32 AORFractalManager::GetPlayLayerIndex() {
    return 0;
}

int32 AORFractalManager::GetNumLayers() {
    return 0;
}

FVector AORFractalManager::GetFractalCenter() {
    return FVector{};
}

TSubclassOf<AORFractalLayer> AORFractalManager::GetCurrentLayerClass() {
    return NULL;
}

AActor* AORFractalManager::GetCenterBeacon() {
    return NULL;
}

void AORFractalManager::DestroyCenterHole() {
}

void AORFractalManager::DeactivateFractal() {
}

void AORFractalManager::AttachActorToLayer(AActor* ActorToAttach, int32 LayerIndex) {
}

void AORFractalManager::ActivateFractal() {
}

AORFractalManager::AORFractalManager() {
    this->NumOuterLayers = 2;
    this->NumInnerLayers = 2;
    this->ScaleIncreaseBase = 5.00f;
    this->ZOffetPerLayer = 0.00f;
    this->MaxPlayerScale = 2.00f;
    this->MinRadius = -1.00f;
    this->MaxRadius = -1.00f;
    this->ScaleFudge = 0.07f;
    this->TeleportToOuterDistanceFudge = 30.00f;
    this->TeleportToInnerDistanceFudge = 0.00f;
    this->VelocityFudge = 0.00f;
    this->VelocityLocationFudge = 0.00f;
    this->bResetPlayerScaleOnExit = true;
    this->bCleanupCenterHoleOnExit = false;
    this->DefaultLayerClass = NULL;
    this->CenterBeaconClass = NULL;
    this->CenterHoleCapClass = NULL;
    this->CenterVFX = NULL;
    this->bShowDebug = false;
    this->SceneRoot = CreateDefaultSubobject<USceneComponent>(TEXT("SceneRoot"));
    this->PlayerTeleportLocation = CreateDefaultSubobject<USceneComponent>(TEXT("PlayerTeleportLocation"));
    this->ExitVolume = CreateDefaultSubobject<UORTriggerVolumeComponent>(TEXT("ExitVolume"));
}

