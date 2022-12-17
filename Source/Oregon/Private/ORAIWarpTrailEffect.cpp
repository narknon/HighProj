#include "ORAIWarpTrailEffect.h"
#include "Components/SceneComponent.h"
#include "Components/SkeletalMeshComponent.h"

void AORAIWarpTrailEffect::InitMesh(USkeletalMeshComponent* Mesh) {
}

AORAIWarpTrailEffect::AORAIWarpTrailEffect() {
    this->SceneRoot = CreateDefaultSubobject<USceneComponent>(TEXT("SceneRoot"));
    this->Comp1 = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Comp_0"));
    this->Comp2 = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Comp_1"));
    this->Comp3 = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Comp_2"));
    this->EffectLifetime = 1.50f;
    this->LifeTimeScale = 1.00f;
    this->MinPositionPower = 0.50f;
    this->MaxPositionPower = 1.50f;
}

