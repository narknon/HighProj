#include "TetherCableActor.h"
#include "Components/SceneComponent.h"
#include "Components/StaticMeshComponent.h"

ATetherCableActor::ATetherCableActor() {
    this->bLockCurrentState = false;
    this->StaticMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent"));
    this->bSynchronousRealtime = false;
    this->RealtimeInEditorTimeDilation = 1.00f;
    this->bDebugVisualizeSimulationParticles = false;
    this->bDebugVisualizeSimulationCollision = false;
    this->bDebugVisualizeBuiltStaticMeshPoints = false;
    this->bDebugVisualizeContactPoints = false;
    this->bDebugVisualizeComponentLocations = false;
    this->bDebugVisualizeTangents = false;
    this->bVisible = true;
    this->SceneRoot = CreateDefaultSubobject<USceneComponent>(TEXT("SceneRoot"));
    this->GuideSpline = NULL;
    this->StaticMesh = NULL;
    this->DynamicPreviewMesh = NULL;
    this->MeshGenerator = NULL;
}

