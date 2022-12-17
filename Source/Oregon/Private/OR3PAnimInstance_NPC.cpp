#include "OR3PAnimInstance_NPC.h"

bool UOR3PAnimInstance_NPC::TrySetIdleOverride_Implementation() {
    return false;
}

void UOR3PAnimInstance_NPC::SetNewIdle() {
}

void UOR3PAnimInstance_NPC::DoNewIdleFidget() {
}

UOR3PAnimInstance_NPC::UOR3PAnimInstance_NPC() {
    this->bLowerBodyBlendEnabled = true;
    this->bCanDoIdleFidgets = false;
    this->bIsInPlay = false;
    this->bHasIK = false;
    this->bHasHandIK = false;
    this->bIsDead = false;
    this->bIsInPlayerInteraction = false;
    this->bHasCustomInteractionActions = false;
    this->bShouldUseLookAt = false;
    this->bShouldUseEyeLookAt = false;
    this->bIsTurning = false;
    this->bBlendLowerBody = false;
    this->RandomNoticeBlendTime = 0.25f;
    this->HeadAimX = 0.00f;
    this->HeadAimY = 0.00f;
    this->EyeAimX = 0.00f;
    this->EyeAimY = 0.00f;
    this->Speed = 0.00f;
    this->CurrentRotationAngularSpeed = 0.00f;
    this->CachedDeformerComponent = NULL;
    this->CachedDismemberComponent = NULL;
    this->CachedActionAnimationComponent = NULL;
    this->CachedMoveComponent = NULL;
    this->IdleSequence = NULL;
    this->WalkBlendSpace = NULL;
    this->SimpleWalkBlendSpace = NULL;
    this->LookAtAimOffset = NULL;
    this->DeathMontage = NULL;
}

