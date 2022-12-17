#include "ORCharacter.h"
#include "Templates/SubclassOf.h"
#include "ORAbilitySystemComponent.h"
#include "ORAttentionComponent.h"
#include "ORCharacterInventory.h"
#include "ORDamageHandlerComponent_Character.h"
#include "ORPossessableComponent.h"
#include "ORTargetableComponent_Character.h"
#include "ORTriggerSourceCharComponent.h"
#include "ORVocalizationComponent.h"
#include "Components/PawnNoiseEmitterComponent.h"

class UObject;
class AActor;
class UAkAudioEvent;
class USkeletalMesh;
class UORAkComponent;
class AORPickupBase;
class AORFireableInventoryItem;

void AORCharacter::TrySkeletalMeshMerge() {
}

void AORCharacter::SetupSkeletalMeshMerge(bool bAsync) {
}

void AORCharacter::SetTeamIdByFaction(const TEnumAsByte<EFactionTeamIDs> NewFactionID) {
}

void AORCharacter::SetTeamId(const FGenericTeamId NewID) {
}

void AORCharacter::SetRootMotionTranslationScale(float InScale) {
}

void AORCharacter::SetHitZoneState(FName HitZoneName, bool bNewState) {
}

void AORCharacter::SetHitZoneDamageMod(FName HitZoneName, float DamageMod) {
}

void AORCharacter::SetCurrentHealth(float HealthValue) const {
}

void AORCharacter::SetCharacterAkSwitches() {
}

void AORCharacter::SetADSState(bool bADSOn) {
}

void AORCharacter::ResetJumpCount() {
}

void AORCharacter::RemoveEventTagForCharacter_Implementation(const FGameplayTag EventTag) {
}

void AORCharacter::PostEventTagForCharacter(const FGameplayTag EventTag, const float LifetimeLength) {
}

int32 AORCharacter::PlayVocalizationAudioEvent(UAkAudioEvent* Event) {
    return 0;
}

bool AORCharacter::PlayVocalizationAudio(EORVocalizationType VocalizationType) {
    return false;
}

bool AORCharacter::PlayFootstepAudio(EORFoot Foot) {
    return false;
}

void AORCharacter::OnCleanup_Implementation() {
}

void AORCharacter::KnockupLaunchCharacter(FVector LaunchVelocity, bool bXYOverride, bool bZOverride) {
}


void AORCharacter::K2_ADSStateChanged_Implementation(bool bADSOn) {
}

bool AORCharacter::IsHitZoneEnabled(const FHitZone& HitZone) const {
    return false;
}

bool AORCharacter::IsFullHealth() const {
    return false;
}

bool AORCharacter::IsEnemyActor(const AActor* OtherActor) const {
    return false;
}

bool AORCharacter::IsCrouching() {
    return false;
}

bool AORCharacter::IsAliveAndWell() const {
    return false;
}

bool AORCharacter::IsAbilityActive(FName ActionName) {
    return false;
}

void AORCharacter::ImmediateCharacterTimeDilationTransition() {
}

float AORCharacter::GetTimeSinceLastDamageTaken() const {
    return 0.0f;
}

FVector AORCharacter::GetRecoilOffsets() {
    return FVector{};
}

float AORCharacter::GetRecentMovementAmount() {
    return 0.0f;
}

FVector AORCharacter::GetRecentLocationFromActor(const AActor* SourceActor, float MinTime, float MaxTime, float RecommendedMinDistance) const {
    return FVector{};
}

FVector AORCharacter::GetRecentLocation(float LookbackTimeInSeconds) const {
    return FVector{};
}

UORAkComponent* AORCharacter::GetORAkComponent(FGameplayTag GameplayTag) {
    return NULL;
}

float AORCharacter::GetJukeFactor(float LookbackTime) const {
    return 0.0f;
}

FHitZone AORCharacter::GetHitZoneForBone(FName BoneName) {
    return FHitZone{};
}

AORFireableInventoryItem* AORCharacter::GetEquippedPrimaryItem() {
    return NULL;
}

float AORCharacter::GetCurrentHealthPct() const {
    return 0.0f;
}

float AORCharacter::GetCurrentHealthMax() const {
    return 0.0f;
}

float AORCharacter::GetCurrentHealth() const {
    return 0.0f;
}

FVector AORCharacter::GetAimVector() {
    return FVector{};
}

FVector AORCharacter::GetAimSourceLocation() {
    return FVector{};
}

void AORCharacter::ForceKill(UObject* OptionalDamager, FHitResult OptionalHitResult, FGameplayTagContainer OptionalDamageTags) {
}

void AORCharacter::FinalizeSkeletalMeshMerge(USkeletalMesh* MergedMesh) {
}

void AORCharacter::EndActivateAbility(FName ActionName) {
}

void AORCharacter::EnableFireableItem(TSubclassOf<AORFireableInventoryItem> ItemToEnable) {
}

void AORCharacter::DoSkeletalMeshMerge() {
}

void AORCharacter::DisableFireableItem(TSubclassOf<AORFireableInventoryItem> ItemToDisable) {
}

void AORCharacter::Cleanup() {
}

void AORCharacter::CharacterTimeDilationChanged(float Diff, float NewValue) {
}

void AORCharacter::CharacterLifeSpanChanged(float Diff, float NewValue) {
}

bool AORCharacter::CanTakePickup(AORPickupBase* PickupItem) {
    return false;
}

void AORCharacter::CancelAllFireModes() {
}

void AORCharacter::CancelAbility(FName ActionName) {
}

void AORCharacter::BP_PostEventTagForCharacter_Implementation(const FGameplayTag EventTag, const float LifetimeLength) {
}


bool AORCharacter::BP_CanTakePickup_Implementation(AORPickupBase* PickupItem) {
    return false;
}

bool AORCharacter::BP_CanFireItem_Implementation(AORFireableInventoryItem* Item, FGameplayTag Mode) {
    return false;
}

void AORCharacter::ActivateAbility(FName ActionName) {
}

AORCharacter::AORCharacter() {
    this->LastTimeDamageMitgated = -100.00f;
    this->LastTimeDamageBlocked = -100.00f;
    this->NewMergedMesh = NULL;
    this->DamageHandler = CreateDefaultSubobject<UORDamageHandlerComponent_Character>(TEXT("DamageHandler"));
    this->NiagaraBloodVFX = NULL;
    this->CascadeBloodVFX = NULL;
    this->bAutoCleanup = false;
    this->ADSOn = false;
    this->AbilitySystem = CreateDefaultSubobject<UORAbilitySystemComponent>(TEXT("AbilitySystem"));
    this->AttributeType = NULL;
    this->AttributeDefaults = NULL;
    this->bDoRuntimeSkeletalMeshMerge = false;
    this->bHasInventory = true;
    this->Inventory = CreateDefaultSubobject<UORCharacterInventory>(TEXT("CharacterInventory"));
    this->Targetable = CreateDefaultSubobject<UORTargetableComponent_Character>(TEXT("Target"));
    this->NoiseEmitter = CreateDefaultSubobject<UPawnNoiseEmitterComponent>(TEXT("NoiseEmitter"));
    this->TriggerSourceComponent = CreateDefaultSubobject<UORTriggerSourceCharComponent>(TEXT("TriggerSourceComponent"));
    this->ORPossessableComp = CreateDefaultSubobject<UORPossessableComponent>(TEXT("ORPossessableComp"));
    this->ORAttentionComp = CreateDefaultSubobject<UORAttentionComponent>(TEXT("ORAttentionComp"));
    this->ORVoclizationComp = CreateDefaultSubobject<UORVocalizationComponent>(TEXT("ORVocalizationComp"));
    this->Loudness = 1.00f;
    this->MaxFootstepSoundRange = 1500.00f;
    this->VocalizationAkEvent = NULL;
    this->CharacterAkSwitch = NULL;
    this->FootstepAkEvent = NULL;
    this->RustleAkEvent = NULL;
    this->EnterTimeDilationTransitionCurve = NULL;
    this->ExitTimeDilationTransitionCurve = NULL;
    this->OldTimeDilation = 1.00f;
    this->GoalTimeDilation = 1.00f;
    this->TimeDilationProgress = 0.00f;
    this->bActiveTimeDilation = false;
    this->ActiveInteractorResult = NULL;
    this->MaxInteractableDistance = 4096.00f;
}

