#include "ORProjectileTrailFXActor.h"
#include "Components/SceneComponent.h"

void AORProjectileTrailFXActor::StopVFX() {
}

AORProjectileTrailFXActor::AORProjectileTrailFXActor() {
    this->RootSceneComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComp"));
    this->ParticleSystem = NULL;
    this->VFX = NULL;
    this->FollowActor = NULL;
}

