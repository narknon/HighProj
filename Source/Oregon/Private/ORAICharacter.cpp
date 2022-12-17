#include "ORAICharacter.h"
#include "ORAIAutoKillComponent.h"
#include "ORHealthDropComponent.h"
#include "ORGravityFuckeryComponent.h"
#include "ORPhysicalAnimationPrototypeComponent.h"

class UObject;
class AActor;
class ASQInventoryItem;
class UPrimitiveComponent;
class UMeshComponent;
class AORAIController;
class AORAICharacter;
class UORAISquad;
class AORPatrolRoute;
class UAnimSequence;
class UAnimMontage;

void AORAICharacter::UnregisterFromST() {
}

void AORAICharacter::StopDamageFlash() {
}

void AORAICharacter::StartTraversalLeapViaSpline() {
}

void AORAICharacter::StartTraversalLeapViaPhysics(float GravityAcceleration) {
}

void AORAICharacter::StartDamageFlash() {
}

void AORAICharacter::SkipDeathAnimation() {
}



bool AORAICharacter::ShouldSkipDeathAnimation() const {
    return false;
}

bool AORAICharacter::ShouldBlendToRagdollOnDied_Implementation() const {
    return false;
}

void AORAICharacter::SetUseFastNarrativeMovement(const bool NewUseFastNarrativeMovement) {
}

void AORAICharacter::SetStatusEffect(EORAIStatusEffect Effect) {
}

void AORAICharacter::SetPackAttackCooldown() {
}

void AORAICharacter::SetIKEnabled(bool bNewEnable) {
}

void AORAICharacter::SetIdleOverride(UAnimSequence* Anim) {
}

void AORAICharacter::SetDefaultAttractionPointQuery(const FORAttractionPointSubsystemQuery& AttractionPointQuery) {
}

void AORAICharacter::SetAssignedPatrolRoute(AORPatrolRoute* NewRoute) {
}

bool AORAICharacter::ReturnToPool() {
    return false;
}

void AORAICharacter::PlayDeathAnimation(UAnimMontage* DeathMontage) {
}

void AORAICharacter::OwnerItemEventFired(ASQInventoryItem* Item, FGameplayTag EventTag, FGameplayTag FireModeTag, TEnumAsByte<EInventoryTransactionType> TransactionType) {
}


void AORAICharacter::OnHealthChanged(float Change, float NewValue, bool Silent) {
}

void AORAICharacter::OnDeathAnimationEnded(UAnimMontage* Montage, bool bInterrupted) {
}

void AORAICharacter::OnControllerHostileAwarenessChanged(AORAIController* ORAIController, const EORAIHostileAwareness OldAwareness, const EORAIHostileAwareness NewAwareness) {
}

void AORAICharacter::OnCharacterMeshHitPostDeath(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit) {
}

void AORAICharacter::KnockupTagChanged(const FGameplayTag InTag, int32 NewCount) {
}

bool AORAICharacter::IsOnPackAttackCooldown() const {
    return false;
}

void AORAICharacter::HandleProximityEntered(AActor* Actor, int32 VolumeIndex) {
}

void AORAICharacter::HandleDeathPhysicsBlendFinished() {
}

float AORAICharacter::GetTimeSinceTakenPlayerDamage() const {
    return 0.0f;
}

FORAttractionPointSubsystemQuery AORAICharacter::GetDefaultAttractionPointQuery() const {
    return FORAttractionPointSubsystemQuery{};
}

TArray<UMeshComponent*> AORAICharacter::GetDamageFlashMeshComponents_Implementation() {
    return TArray<UMeshComponent*>();
}

AORPatrolRoute* AORAICharacter::GetAssignedPatrolRoute() {
    return NULL;
}

UORAISquad* AORAICharacter::GetAISquad() const {
    return NULL;
}

AORAICharacter* AORAICharacter::GetActorToAssist() {
    return NULL;
}

TArray<AORAICharacter*> AORAICharacter::GetActorsISpawned() {
    return TArray<AORAICharacter*>();
}

bool AORAICharacter::GetAbilityUsageDataForTag(const FGameplayTag AbilityTag, FORAbilityUsageData& OutAbilityData) const {
    return false;
}

void AORAICharacter::ExitMagwall() {
}

void AORAICharacter::DisableKnockups() {
}

void AORAICharacter::DeathAnimationTimedOut() {
}

void AORAICharacter::ClearScriptCommands() {
}









bool AORAICharacter::BP_CanPostTakeDamageEventToND_Implementation(UObject* Damager, const FHitResult& HitResult, float Damage, const FGameplayTagContainer& DamageTags) {
    return false;
}

void AORAICharacter::BP_BeginShutdown_Implementation() {
}

void AORAICharacter::BeginShutdown() {
}

void AORAICharacter::ActivateBestInteraction() {
}

AORAICharacter::AORAICharacter() {
    this->HealthDropComponent = CreateDefaultSubobject<UORHealthDropComponent>(TEXT("HealthDropComponent"));
    this->PhysicalAnimationComponent = CreateDefaultSubobject<UORPhysicalAnimationPrototypeComponent>(TEXT("PhyiscalAnimation"));
    this->ProximitySenseTriggerVolume = NULL;
    this->GravityFuckery = CreateDefaultSubobject<UORGravityFuckeryComponent>(TEXT("GravityFuckeryComponent"));
    this->AIAutoKillComponent = CreateDefaultSubobject<UORAIAutoKillComponent>(TEXT("AIAutoKillComponent"));
    this->bReserveAttackTokens = true;
    this->bUsePooling = false;
    this->bIsInPool = false;
    this->bUseFocusForAimVector = false;
    this->MyEncounterManager = NULL;
    this->bCanRegisterAsNonEncounterEnemy = false;
    this->bLastManStandingTriggered = false;
    this->bDebugEnableBTBehaviorBaseOverrideOnPossession = false;
    this->Stun_AkEvent_PROTOTYPE = NULL;
    this->ExitStun_AkEvent_PROTOTYPE = NULL;
    this->IdleOverrideStartMax = 5.00f;
    this->CachedTargetingFX = NULL;
    this->bAlwaysTrackTarget = false;
    this->MinDesiredRangeToTarget = 0.00f;
    this->MaxDesiredRangeToTarget = 8000.00f;
    this->DesiredRangeToTarget = 4000.00f;
    this->MaxTargetFocusRange = 8000.00f;
    this->KnockupGEClass = NULL;
    this->KnockupDecayGEClass = NULL;
    this->SplatGEClass = NULL;
    this->SkidGEClass = NULL;
    this->PatrolRoute = NULL;
    this->TraversalTypeFlags = 0;
    this->bShouldTraversalLockRotation = true;
    this->TraversalSpline = NULL;
    this->TraversalTimeCurve = NULL;
    this->TraversalLeapTime = 0.00f;
    this->bInTraversalLeap = false;
    this->ExtraPhysicsGravity = 0.00f;
    this->ExtraPhysicsGravityOnDeath = 0.00f;
    this->DeathAbilityClass = NULL;
    this->CurrentStatusEffect = EORAIStatusEffect::None;
    this->SlowNonCombatAwarenessMovementEffectClass = NULL;
    this->FastNonCombatAwarenessMovementEffectClass = NULL;
    this->UseFastNonCombatMovement = false;
    this->NDTakeDamageEventLifetime = 1.00f;
    this->bBlendToRagdollOnDied = true;
    this->bApplyPendingLaunchVelocityOnRagdoll = true;
    this->AdditionalProjectileImpulseAfterDeath = 0.00f;
    this->AllowPostDeathKnockupTime = 0.10f;
    this->PostDeathKnockupImmunityClass = NULL;
    this->bDisableCapsuleOnDeath = true;
    this->bRequireDeathAnimation = false;
    this->PostDeathSTUnregisterTime = 2.00f;
    this->bDisableMovementOnDeath = true;
    this->bDeathAnimationHandled = false;
    this->bDeathAnimationFinished = false;
    this->DeathKnockupLaunchBone = TEXT("pelvis_JNT");
    this->DeathKnockupLaunchScale = 75.00f;
    this->bIsKnockedUp = false;
    this->AISquad = NULL;
    this->DesiredPackSize = 0;
    this->PackFormationDistance = 10000.00f;
    this->bCanBeInPack = true;
    this->bIsPackLeader = false;
    this->PackLeader = NULL;
    this->PackIndex = 0;
    this->PackAttackGlobalCooldownDuration = 0.00f;
    this->PackAssistGlobalCooldownDuration = 0.00f;
    this->PackAttackGlobalCooldown = 0.00f;
    this->PackAssistGlobalCooldown = 0.00f;
    this->bAutoPlayDamageFlashOnDamageTaken = true;
    this->bAutoPlayDamageFlashOnDied = true;
    this->DamageFlashActiveTime = 0.05f;
    this->DamageFlashIntensityCurve = NULL;
    this->DamageFlashMaterialParamName = TEXT("Damaged");
    this->bShouldBeConsideredForAggressiveBehavior = false;
    this->AggressiveBehaviorSlotUsage = 1;
    this->MinDistanceToInteractable = 100.00f;
    this->InteractableTweenSpeed = 1000.00f;
    this->InteractableResultType = NULL;
    this->KnockupPhysicsScale = 3.00f;
    this->WobbleStrength = 1000000.00f;
    this->SignificanceCategory = TEXT("AI");
    this->bUseSignificanceManagement = true;
    this->bUseSignificanceManagementForMeshes = true;
    this->ThrottledTickRate = 0.10f;
    this->OutOfSightSigBoost = 10.00f;
    this->SignificanceBucket = 0;
    this->TotalNecroMinionLifeSteal = 5.00f;
    this->RemainingNecroMinionLifeSteal = 5.00f;
}

