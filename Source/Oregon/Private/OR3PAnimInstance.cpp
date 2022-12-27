#include "OR3PAnimInstance.h"

class UObject;
class ASQInventoryItem;
class AORCharacter;
class UAnimSequence;
class UAnimMontage;

void UOR3PAnimInstance::SetIdleOverride(UAnimSequence* InIdleAnimation) {
}

void UOR3PAnimInstance::SetDisableEyeAutomation(bool bDisable) {
}

void UOR3PAnimInstance::SelectAndPlayGetupMontage() {
}

void UOR3PAnimInstance::RagdollMeshHasStopped() {
}

void UOR3PAnimInstance::RagdollEnd(bool bPlayGetupAnimation) {
}

void UOR3PAnimInstance::RagdollBegin() {
}

UAnimMontage* UOR3PAnimInstance::PickRandomMontageForHitResultDirection2D(const FHitResult& HitResult, const TArray<UAnimMontage*>& FrontMontages, const TArray<UAnimMontage*>& RightMontages, const TArray<UAnimMontage*>& BackMontages, const TArray<UAnimMontage*>& LeftMontages, const TArray<UAnimMontage*>& Fallbacks) const {
    return NULL;
}

void UOR3PAnimInstance::OwnerSpawnedFromPool(AORCharacter* Character) {
}

void UOR3PAnimInstance::OwnerItemEventFired(ASQInventoryItem* Item, FGameplayTag EventTag, FGameplayTag FireModeTag, EInventoryTransactionType TransactionType) {
}

void UOR3PAnimInstance::OwnerDiedEventFired(UObject* Killer, AORCharacter* Killed, const FHitResult& HitResult, const FGameplayTagContainer& DamageTags) {
}

void UOR3PAnimInstance::OwnerDamageTakenEventFired(UObject* Damager, AORCharacter* Damaged, const FHitResult& HitResult, float Damage, const FGameplayTagContainer& DamageTags) {
}

void UOR3PAnimInstance::OwnerDamageAttemptedEventFired(UObject* Damager, AORCharacter* Damaged, const FHitResult& HitResult, float Damage, const FGameplayTagContainer& DamageTags) {
}



void UOR3PAnimInstance::OnGameplayTagsChanged(const FGameplayTag Tag, int32 Count) {
}

void UOR3PAnimInstance::OnExitedSequence() {
}

void UOR3PAnimInstance::OnEnteredSequence() {
}

void UOR3PAnimInstance::LargestHitReactionTypeInTagContainer(const FGameplayTagContainer& InTagContainer, EORHitReactionType& HitReactionType) {
}








bool UOR3PAnimInstance::IsSighted() const {
    return false;
}

bool UOR3PAnimInstance::IsInAir() const {
    return false;
}

bool UOR3PAnimInstance::IsDefaultEmotionOverridden() const {
    return false;
}

void UOR3PAnimInstance::HandleFlinchCompleted() {
}

void UOR3PAnimInstance::GetVelocityComponentsWithSplitLocalSpaceVelocity(FVector& OutWorldSpaceVelocity, FVector& OutLocalSpaceVelocity, float& OutVelocityMagnitude, float& OutForwardSpeed, float& OutSideSpeed, float& OutVerticalSpeed) const {
}

void UOR3PAnimInstance::GetVelocityComponents(FVector& WorldSpaceVelocity, FVector& LocalSpaceVelocity, float& VelocityMagnitude) const {
}

float UOR3PAnimInstance::GetSpeed() const {
    return 0.0f;
}

EORDirection2D UOR3PAnimInstance::GetRelativeHitDirection2D(const FHitResult& HitResult) const {
    return EORDirection2D::Unknown;
}

AORCharacter* UOR3PAnimInstance::GetOwningCharacter() const {
    return NULL;
}

UAnimSequence* UOR3PAnimInstance::GetEmotionPose(EEmotionState Emotion) const {
    return NULL;
}

EEmotionState UOR3PAnimInstance::GetDefaultEmotion() const {
    return EEmotionState::Happy;
}

EEmotionState UOR3PAnimInstance::GetCurrentEmotion() const {
    return EEmotionState::Happy;
}

void UOR3PAnimInstance::GameplayTagChanged(const FGameplayTag Tag, const bool bAdded) {
}

void UOR3PAnimInstance::CommitFlinchAnimation(UAnimMontage* Montage) {
}

void UOR3PAnimInstance::ClearIdleOverride() {
}

UOR3PAnimInstance::UOR3PAnimInstance() {
    this->AimUpdateSpeed = 0.00f;
    this->CurrentPitch = 0.00f;
    this->CurrentYaw = 0.00f;
    this->CurrentPitchSpeed = 0.00f;
    this->CurrentYawSpeed = 0.00f;
    this->PitchAcceleration = 1000.00f;
    this->PitchDeceleration = 500.00f;
    this->YawAcceleration = 1000.00f;
    this->YawDeceleration = 500.00f;
    this->YawClamp = 90.00f;
    this->PitchClamp = 45.00f;
    this->OverridePitchClamp = 0.00f;
    this->OverrideYawClamp = 0.00f;
    this->IdleOverrideStartOffset = 0.00f;
    this->bHeadBonePointsUp = true;
    this->IdleOverride = NULL;
    this->bHasIdleOverride = false;
    this->IdleRate = 1.00f;
    this->bSighted = false;
    this->bIsTalking = false;
    this->bIsTransitioning = false;
    this->DefaultEmotion = EEmotionState::Happy;
    this->CurrentEmotion = EEmotionState::Happy;
    this->HappyPoseAnim = NULL;
    this->SarcasticPoseAnim = NULL;
    this->ExcitedPoseAnim = NULL;
    this->WickedPoseAnim = NULL;
    this->NeutralPoseAnim = NULL;
    this->ConfusedPoseAnim = NULL;
    this->DeterminedPoseAnim = NULL;
    this->SurprisedPoseAnim = NULL;
    this->SadPoseAnim = NULL;
    this->AngryPoseAnim = NULL;
    this->AfraidPoseAnim = NULL;
    this->DisgustedPoseAnim = NULL;
    this->bIsEmotionOverridden = false;
    this->bIsEmotionAllowed = true;
    this->bHasLookAtTarget = false;
    this->bHasEyeLookAtTarget = false;
    this->bDisableEyeAutomation = false;
    this->HeadBoneName = TEXT("Head_JNT");
    this->bEnableTorsoLook = true;
    this->TorsoAimOffsetX = 0.00f;
    this->TorsoAimOffsetY = 0.00f;
    this->HeadAimOffsetX = 0.00f;
    this->HeadAimOffsetY = 0.00f;
    this->Eye1RotationAlpha = 0.00f;
    this->Eye2RotationAlpha = 0.00f;
    this->Eye3RotationAlpha = 0.00f;
    this->Eye4RotationAlpha = 0.00f;
    this->Eye5RotationAlpha = 0.00f;
    this->Eye6RotationAlpha = 0.00f;
    this->bIsRagdolling = false;
    this->bRagdollMeshHasStoppedMoving = false;
    this->HideFaceAnimation = false;
    this->DisableLipsync = false;
    this->bIsInActiveSequence = false;
    this->CurrentFlinchMontage = NULL;
    this->LookAtFacingDirectionPCT = 0.00f;
    this->TotalSpeed = 0.00f;
    this->ForwardSpeed = 0.00f;
    this->SideSpeed = 0.00f;
    this->VerticalSpeed = 0.00f;
}

