#include "ORDeathRagdollSubsystem.h"

class AActor;
class UPrimitiveComponent;
class USkeletalMeshComponent;
class UORCharacterRagdollComponent;

void UORDeathRagdollSubsystem::UntrackRagdoll(USkeletalMeshComponent* RagdollMeshComp) {
}

void UORDeathRagdollSubsystem::UnregisterLivingRagdoll(UORCharacterRagdollComponent* LivingRagdollComp) {
}

void UORDeathRagdollSubsystem::TrackNewRagdoll(USkeletalMeshComponent* RagdollMeshComp, float SleepDelay) {
}

void UORDeathRagdollSubsystem::SetRagdollWake(USkeletalMeshComponent* RagdollMesh, const FHitResult& Hit) {
}

void UORDeathRagdollSubsystem::SetRagdollSleep(USkeletalMeshComponent* RagdollMesh) {
}

void UORDeathRagdollSubsystem::RegisterLivingRagdoll(UORCharacterRagdollComponent* LivingRagdollComp) {
}

void UORDeathRagdollSubsystem::OnRagdollHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit) {
}

void UORDeathRagdollSubsystem::OnRagdollComponentSleep(UPrimitiveComponent* SleepingComponent) {
}

bool UORDeathRagdollSubsystem::IsRagdollTracked(USkeletalMeshComponent* RagdollMeshComp) {
    return false;
}

UORDeathRagdollSubsystem::UORDeathRagdollSubsystem() {
}

