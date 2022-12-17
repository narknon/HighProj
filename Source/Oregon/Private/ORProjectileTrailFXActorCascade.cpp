#include "ORProjectileTrailFXActorCascade.h"
#include "Components/SceneComponent.h"

void AORProjectileTrailFXActorCascade::StopVFX() {
}

AORProjectileTrailFXActorCascade::AORProjectileTrailFXActorCascade() {
    this->RootSceneComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComp"));
    this->ParticleSystem = NULL;
    this->VFX = NULL;
    this->FollowActor = NULL;
}

