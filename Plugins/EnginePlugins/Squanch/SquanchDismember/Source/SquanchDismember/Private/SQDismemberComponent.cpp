#include "SQDismemberComponent.h"

class AActor;
class UPrimitiveComponent;
class ASQDetachedMemberGib;
class UPhysicalMaterial;

void USQDismemberComponent::RepairAll() {
}

void USQDismemberComponent::Repair(const FName& Bone) {
}

void USQDismemberComponent::RecacheDamageZoneNonCulledBones() {
}

void USQDismemberComponent::OnSkelMeshCollided(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit) {
}

void USQDismemberComponent::OnBloodSpurtParticleCollided(FName EventName, float EmitterTime, int32 ParticleTime, FVector Location, FVector Velocity, FVector Direction, FVector Normal, FName BoneName, UPhysicalMaterial* PhysMat) {
}

TArray<ASQDetachedMemberGib*> USQDismemberComponent::ExplosiveDismember(bool& bDismemberSuccess) {
    return TArray<ASQDetachedMemberGib*>();
}

ASQDetachedMemberGib* USQDismemberComponent::DismemberExact(const FHitResult& HitResult, bool& bDismemberSuccess) {
    return NULL;
}

TArray<ASQDetachedMemberGib*> USQDismemberComponent::DismemberClosest(const FHitResult& HitResult, bool& bDismemberSuccess, float ImpactVelocity) {
    return TArray<ASQDetachedMemberGib*>();
}

ASQDetachedMemberGib* USQDismemberComponent::Dismember(const FName& Bone, bool& bDismemberSuccess) {
    return NULL;
}

USQDismemberComponent::USQDismemberComponent() {
    this->bDismembermentEnabled = true;
    this->ImpactVelocityGibsCurve = NULL;
    this->MaxBloodDecalsToSpawn = 10;
    this->BloodDecalLifetime = 0.00f;
    this->BloodDecalFadeTime = 15.00f;
}

