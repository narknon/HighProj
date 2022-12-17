#include "ORCharacterRagdollComponent.h"

void UORCharacterRagdollComponent::StopLivingRagdollPersistent() {
}

void UORCharacterRagdollComponent::StopLivingRagdoll() {
}

void UORCharacterRagdollComponent::StartLivingRagdollPersistent() {
}

void UORCharacterRagdollComponent::StartLivingRagdoll() {
}

void UORCharacterRagdollComponent::RagdollToStandComplete_Implementation() {
}

void UORCharacterRagdollComponent::RagdollSnapshotPose() {
}

void UORCharacterRagdollComponent::RagdollGetUp() {
}

void UORCharacterRagdollComponent::OrientActorRotationToMesh(const bool bIsFacingUp) {
}

void UORCharacterRagdollComponent::OnStopLivingRagdoll_Implementation() {
}

void UORCharacterRagdollComponent::OnStartLivingRagdoll_Implementation() {
}

void UORCharacterRagdollComponent::OnLanded(const FHitResult& Hit) {
}

void UORCharacterRagdollComponent::ImmediateStopLivingRagdoll() {
}

bool UORCharacterRagdollComponent::GetIsMeshFacingUp() const {
    return false;
}

FVector UORCharacterRagdollComponent::CalcNewActorLocationFromMeshPelvis(const FName PelvisBoneName, const float DeltaTime, const float InterpSpeed) const {
    return FVector{};
}

UORCharacterRagdollComponent::UORCharacterRagdollComponent() {
    this->MyCharacter = NULL;
    this->bEnterRagdollEnabled = true;
    this->bIsInLivingRagdoll = false;
    this->bIsInGetup = false;
    this->bPersistentLivingRagdoll = false;
    this->bPawnFollowMeshDuringLivingRagdoll = true;
    this->RestingSpeedThreshold = 200.00f;
    this->RestingRecoveryTime = 0.10f;
    this->MaxRecoveryTime = 10.00f;
    this->MaxFloorDistance = 100.00f;
    this->NavWalkingCooldown = 5.00f;
    this->MeshPelvisBoneName = TEXT("pelvis_JNT");
    this->RagdollPositionTraceChannel = ECC_Visibility;
    this->TimeEnteredRagdoll = 0.00f;
}

