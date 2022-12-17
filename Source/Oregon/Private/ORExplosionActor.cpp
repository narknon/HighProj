#include "ORExplosionActor.h"
#include "ORTriggerVolumeComponent.h"

class AActor;

void AORExplosionActor::TriggerOverlapEnd(AActor* OtherActor, int32 VolumeIndex) {
}

void AORExplosionActor::TriggerOverlapBegin(AActor* OtherActor, int32 VolumeIndex) {
}

void AORExplosionActor::SetHitResult_Implementation(const FHitResult& NewHitResult) {
}

AORExplosionActor::AORExplosionActor() {
    this->TriggerCollision = CreateDefaultSubobject<UORTriggerVolumeComponent>(TEXT("ExplosionTrigger"));
    this->ApplicationType = EAT_Enemy;
}

