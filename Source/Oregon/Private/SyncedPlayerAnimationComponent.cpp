#include "SyncedPlayerAnimationComponent.h"

class USkeletalMeshComponent;
class UAnimMontage;

void USyncedPlayerAnimationComponent::StartSyncedAnimation(USkeletalMeshComponent* OwnerSkelMesh, FTransform OptionalLerpTransform) {
}

void USyncedPlayerAnimationComponent::OnMontageEnded(UAnimMontage* Montage, bool bInterrupted) {
}

bool USyncedPlayerAnimationComponent::IsAnimationPlaying() {
    return false;
}

void USyncedPlayerAnimationComponent::EquippedItemChanged(FGameplayTag ItemTag) {
}

void USyncedPlayerAnimationComponent::EndSyncedAnimation() {
}

void USyncedPlayerAnimationComponent::EnablePlayerInput() {
}

void USyncedPlayerAnimationComponent::BeginPlayingAnimations() {
}

USyncedPlayerAnimationComponent::USyncedPlayerAnimationComponent() {
    this->bArmsFollowCamera = false;
    this->bForcePlayOnArmRig = false;
    this->bLowerGunAtStart = true;
    this->bRaiseGunAtEnd = true;
    this->bDisableGravityDuringAnim = true;
    this->bDisableCollisionDuringAnim = true;
    this->EnableInputOffsetFromEnd = 0.00f;
    this->OverrideTransformState = ETS_None;
    this->PlayerAnimMontage = NULL;
    this->ActorAnimMontage = NULL;
    this->ActorAnimSequence = NULL;
    this->bAnimateWhileLerping = true;
    this->bHideArmsWhileLerping = false;
    this->PlayerLerpTime = 0.80f;
    this->bUseLerpCurve = false;
    this->CachedOwnerSkelMesh = NULL;
}

