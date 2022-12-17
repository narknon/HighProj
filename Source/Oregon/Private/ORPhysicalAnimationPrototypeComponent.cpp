#include "ORPhysicalAnimationPrototypeComponent.h"

void UORPhysicalAnimationPrototypeComponent::SetUpperBodyBlendEnabled(bool bInUpperBodyBlendEnabled) {
}

bool UORPhysicalAnimationPrototypeComponent::IsPhysicsBlendingOrActive() {
    return false;
}

void UORPhysicalAnimationPrototypeComponent::ImmediatePhysics() {
}

void UORPhysicalAnimationPrototypeComponent::HandleLivingRagdollChanged(bool bInRagdoll) {
}

void UORPhysicalAnimationPrototypeComponent::HandleKnockupChanged(bool bInKnockup) {
}

void UORPhysicalAnimationPrototypeComponent::BeginBlendToPhysics() {
}

void UORPhysicalAnimationPrototypeComponent::BeginBlendOutOfPhysics() {
}

UORPhysicalAnimationPrototypeComponent::UORPhysicalAnimationPrototypeComponent() {
    this->RootBoneName = TEXT("pelvis");
    this->UpperBodyBoneName = TEXT("spine_02_JNT");
    this->HeadBoneName = TEXT("Head_JNT");
    this->bApplyPhysicalAnimSettingsToRootBone = false;
    this->PhysicsEnableDelay = 0.10f;
    this->AnimationBlendTime = 0.30f;
    this->PhysicsBlendTime = 1.00f;
    this->UpperBodyPhysicsWeight = 0.75f;
}

