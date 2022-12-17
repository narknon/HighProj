#include "OR1PAnimInstance.h"

class AORPlayerCharacter;
class UAnimSequence;


void UOR1PAnimInstance::TetherEventTriggered(FGameplayTag Event) {
}

void UOR1PAnimInstance::TetherAnimationComplete() {
}

bool UOR1PAnimInstance::ShouldTransitionCombatState() {
    return false;
}

void UOR1PAnimInstance::SetDisableEyeAutomation(bool bDisable) {
}

void UOR1PAnimInstance::PlayerPossessionChanged(bool bPossessed) {
}

void UOR1PAnimInstance::PlayerJumped(int32 JumpCount) {
}

void UOR1PAnimInstance::PlayerGroundPoundImpacted(FVector Location) {
}



void UOR1PAnimInstance::MeleeEventTriggered(FGameplayTag Event) {
}

void UOR1PAnimInstance::LedgeGrabTriggered(float GrabHeight) {
}



bool UOR1PAnimInstance::IsZiplining() {
    return false;
}

bool UOR1PAnimInstance::IsTetherPulling() {
    return false;
}

bool UOR1PAnimInstance::IsTethering() {
    return false;
}

bool UOR1PAnimInstance::IsSprinting() {
    return false;
}

bool UOR1PAnimInstance::IsSliding() {
    return false;
}

bool UOR1PAnimInstance::IsLeftArmActionActive() {
    return false;
}

bool UOR1PAnimInstance::IsInGroundPound() {
    return false;
}

bool UOR1PAnimInstance::IsInCombatState() {
    return false;
}

bool UOR1PAnimInstance::IsInAir() {
    return false;
}

bool UOR1PAnimInstance::IsHovering() {
    return false;
}

bool UOR1PAnimInstance::IsGliding() {
    return false;
}

bool UOR1PAnimInstance::IsDefaultEmotionOverridden() {
    return false;
}

bool UOR1PAnimInstance::IsDashing() {
    return false;
}

bool UOR1PAnimInstance::IsCrouched() {
    return false;
}

bool UOR1PAnimInstance::IsClamped() {
    return false;
}

bool UOR1PAnimInstance::IsADSOn() {
    return false;
}



FVector2D UOR1PAnimInstance::GetViewRelativeVelocity() {
    return FVector2D{};
}

AORPlayerCharacter* UOR1PAnimInstance::GetOwningCharacter() {
    return NULL;
}

float UOR1PAnimInstance::GetOwnerSpeed2D() {
    return 0.0f;
}

float UOR1PAnimInstance::GetOwnerSpeed() {
    return 0.0f;
}

TEnumAsByte<EMovementMode> UOR1PAnimInstance::GetMovementMode() {
    return MOVE_None;
}

UAnimSequence* UOR1PAnimInstance::GetEmotionPose(EEmotionState Emotion) {
    return NULL;
}

EEmotionState UOR1PAnimInstance::GetDefaultEmotion() {
    return EEmotionState::Happy;
}

TEnumAsByte<EOregonCustomMovement> UOR1PAnimInstance::GetCustomMovementMode() {
    return EOCM_Slide;
}

EEmotionState UOR1PAnimInstance::GetCurrentEmotion() {
    return EEmotionState::Happy;
}

void UOR1PAnimInstance::EndLeftArmAction() {
}

void UOR1PAnimInstance::EndCombatStateTransition() {
}

void UOR1PAnimInstance::CombatStateChanged(bool bInCombat) {
}







void UOR1PAnimInstance::ActivateLeftArmAction() {
}

UOR1PAnimInstance::UOR1PAnimInstance() {
    this->CombatStateTransitionBlendTime = 0.10f;
    this->bShouldTransitionCombatState = false;
    this->DefaultEmotion = EEmotionState::Happy;
    this->CurrentEmotion = EEmotionState::Happy;
    this->bIsEmotionOverridden = false;
    this->bIsKnifeyIdling = false;
    this->bIsTalking = false;
    this->bIsTransitioning = false;
    this->bIsReloading = false;
    this->bIsTalkingNotReloading = false;
    this->EmotionBlendAlpha = 0.00f;
    this->bHasLookAtLocation = false;
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
    this->ExhaustedPoseAnim = NULL;
    this->bIsHeadBoneUp = false;
    this->bHasLookAtTarget = false;
    this->bHasEyeLookAtTarget = false;
    this->TorsoAimOffsetX = 0.00f;
    this->TorsoAimOffsetY = 0.00f;
    this->HideFaceAnimation = false;
    this->DisableLipsync = false;
    this->DisableEyeAutomation = false;
    this->Eye1RotationAlpha = 0.00f;
    this->Eye2RotationAlpha = 0.00f;
    this->Eye1UsesWorldSpace = false;
    this->Eye2UsesWorldSpace = false;
}

