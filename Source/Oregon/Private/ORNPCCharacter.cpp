#include "ORNPCCharacter.h"
#include "ORActivityProfileComponent.h"
#include "ORActionAnimationComponent.h"
#include "ORDetachedTriggerComponent.h"

class AActor;

void AORNPCCharacter::StopNoticingPlayer() {
}

void AORNPCCharacter::StartNoticingPlayer() {
}

void AORNPCCharacter::SetExplicitInteractionTarget(AActor* Actor, bool bForce) {
}

void AORNPCCharacter::SetDisableEyeAutomation(bool bDisable) {
}

void AORNPCCharacter::SetBaseIdleOverride() {
}

void AORNPCCharacter::ScaleMovementSpeed(float MovementScale) {
}

void AORNPCCharacter::PlayerBumpInto(AActor* OtherActor, int32 VolumeIndex) {
}

void AORNPCCharacter::OnTimerFinished() {
}

void AORNPCCharacter::OnPostBumpTimerFinished() {
}



void AORNPCCharacter::MarkAsDead(bool bDead) {
}

bool AORNPCCharacter::IsInPlayerInteraction() const {
    return false;
}

void AORNPCCharacter::ForceEndInteraction(float InteractionCooldown, bool bDisableFutureInteractions) {
}

void AORNPCCharacter::ClearExplicitInteractionTarget(bool bForce) {
}

void AORNPCCharacter::ClearBaseIdleOverride() {
}

bool AORNPCCharacter::CanStartPlayerInteraction_Implementation(AActor* PlayerActor) {
    return false;
}

AORNPCCharacter::AORNPCCharacter() {
    this->ActionAnimationComponent = CreateDefaultSubobject<UORActionAnimationComponent>(TEXT("ActionAnimation"));
    this->ActivityProfileComponent = CreateDefaultSubobject<UORActivityProfileComponent>(TEXT("ActivityProfile"));
    this->bAllowIdleFidgets = false;
    this->BaseIdle = NULL;
    this->bShouldCycleIdles = false;
    this->IdleCycleWaitTime = 30.00f;
    this->bBumpReactsEnabled = true;
    this->bJustBumped = false;
    this->bHitReactsEnabled = true;
    this->bCanDie = false;
    this->bRagdollOnDeath = true;
    this->bDismemberOnDeath = false;
    this->bInterruptSpeakerOnDeath = true;
    this->DeathMontage = NULL;
    this->DetachedTriggerVolumeComp = CreateDefaultSubobject<UORDetachedTriggerComponent>(TEXT("ORDetachedTriggerVolume"));
    this->bIsPlayerInteractable = false;
    this->bShouldStopActivityProfileOnInteract = true;
    this->bShouldResumeActivityProfileOnInteractEnd = true;
    this->bHasCustomInteractionActions = false;
    this->MaxInteractRadius = 0.00f;
    this->bShouldNoticePlayer = false;
    this->bRandomizePlayerNotice = false;
    this->MaxNoticeRadius = 0.00f;
    this->MinNoticeDot = 0.00f;
    this->MaxNoticeCooldownDelay = 10.00f;
    this->MaxNoticeTime = 10.00f;
    this->bNoticedPlayer = false;
    this->bHasDied = false;
    this->MinActivityInterruptTime = 1.00f;
    this->MaxActivityInterruptTime = 5.00f;
    this->ExplicitInteractionTarget = NULL;
}

