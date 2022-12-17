#include "ORTrajectoryPreviewActor.h"
#include "Components/SceneComponent.h"
#include "Components/SplineComponent.h"

AORTrajectoryPreviewActor::AORTrajectoryPreviewActor() {
    this->RootSceneComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootSceneComponent"));
    this->ImpactSceneComponent = CreateDefaultSubobject<USceneComponent>(TEXT("ImpactPreviewMeshComponent"));
    this->SplineComponent = CreateDefaultSubobject<USplineComponent>(TEXT("SplineComponent"));
    this->SplineMesh = NULL;
    this->SplineMeshMaterial = NULL;
    this->bHideSplineMeshOnSpawnObstruction = false;
    this->bHasSpawnObstruction = false;
}

