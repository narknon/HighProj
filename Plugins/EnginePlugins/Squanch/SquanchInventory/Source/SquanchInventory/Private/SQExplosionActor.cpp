#include "SQExplosionActor.h"
#include "Camera/CameraShakeSourceComponent.h"

class AActor;
class UPrimitiveComponent;

void ASQExplosionActor::TriggerExplosionDeath() {
}

bool ASQExplosionActor::ShouldApplyEffects_Implementation(AActor* OtherActor, UPrimitiveComponent* OtherComponent) {
    return false;
}

void ASQExplosionActor::RemoveEffectsForActor(AActor* OtherActor) {
}

void ASQExplosionActor::RefreshLifetime() {
}

void ASQExplosionActor::OverlapEnd(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void ASQExplosionActor::OverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void ASQExplosionActor::FinalizeDestroy() {
}

void ASQExplosionActor::ExplosionShutdown_Implementation() {
}

void ASQExplosionActor::ExplosionDestroy_Implementation() {
}

void ASQExplosionActor::ExplosionCreated_Implementation() {
}

void ASQExplosionActor::ExplosionAttachedToActor_Implementation(AActor* ParentAttachment) {
}

void ASQExplosionActor::AttachParentDied(AActor* AttachParent) {
}

void ASQExplosionActor::AddToLifetime(float AdditionalLifetime) {
}

ASQExplosionActor::ASQExplosionActor() {
    this->SpawnFrame = 0;
    this->InitialEffectsSlackFrames = 3;
    this->bUseLOSCheck = true;
    this->LOSTraceChannel = ECC_GameTraceChannel9;
    this->CollisionComponent = NULL;
    this->CameraShake = CreateDefaultSubobject<UCameraShakeSourceComponent>(TEXT("CameraShake"));
    this->bInheritSpawningFalloff = false;
}

