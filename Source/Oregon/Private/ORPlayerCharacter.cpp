#include "ORPlayerCharacter.h"
#include "Components/SkeletalMeshComponent.h"
#include "ORTriggerVolumeComponent.h"
#include "ORLastGoodLocationTracker.h"
#include "ORPlayerInputComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/WidgetInteractionComponent.h"

class UObject;
class AActor;
class ASQInventoryItem;
class UAkAudioEvent;
class UAnimInstance;
class UMeshComponent;
class AORCharacter;
class AORFireableInventoryItem;
class UORGlobalEventPayload;
class AORInteractionStationManager;
class UORPlayerTransformManager;
class UMaterialInterface;

void AORPlayerCharacter::WorldDilationChanged(float Diff, float NewValue) {
}

void AORPlayerCharacter::WeaponModRemoved(const UORGlobalEventPayload* EventData) {
}

void AORPlayerCharacter::WeaponModAdded(const UORGlobalEventPayload* EventData) {
}

void AORPlayerCharacter::UpdateCombatState() {
}

void AORPlayerCharacter::UpdateCombatMusic() {
}

void AORPlayerCharacter::UnregisterOwnedSkelMesh(UMeshComponent* Skelmesh) {
}

void AORPlayerCharacter::UnregisterOwnedActor(AActor* Actor) {
}


void AORPlayerCharacter::SupportFireDisabledTagChanged(const FGameplayTag Tag, int32 NewCount) {
}

void AORPlayerCharacter::SlideImpactOverlap(AActor* OtherActor, int32 VolumeIndex) {
}

void AORPlayerCharacter::SetPlayingSyncedAnim(bool bSyncedAnim, TEnumAsByte<ETransformState> OverrideTransformState) {
}

void AORPlayerCharacter::SetPlayerRadio(AActor* RadioActor) {
}

void AORPlayerCharacter::SetMultigunState(bool bIsMultigunActive) {
}

void AORPlayerCharacter::SetMaterialAdjustmentNearSurfaceEnabled(bool bNewEnable, bool bForceUndoMaterialAdjustment) {
}

void AORPlayerCharacter::SetKnifeyTalkingState(bool bIsTalking) {
}

void AORPlayerCharacter::SetKnifeyShown(bool bIsShown) {
}

void AORPlayerCharacter::SetKnifeyExecuting(bool bIsExecuting) {
}

void AORPlayerCharacter::SetCurrentInteractionStation(AORInteractionStationManager* CurrentStation) {
}

void AORPlayerCharacter::SetAllowKnifeyShown(bool bIsAllowed) {
}

void AORPlayerCharacter::RegisterOwnedSkelMesh(UMeshComponent* Skelmesh) {
}

void AORPlayerCharacter::RegisterOwnedActor(AActor* Actor) {
}

void AORPlayerCharacter::RefreshArmMesh() {
}

void AORPlayerCharacter::PrimaryFireDisabledTagChanged(const FGameplayTag Tag, int32 NewCount) {
}

void AORPlayerCharacter::PlayFeedback(const FGameplayTagContainer& FeedbackTags) {
}

void AORPlayerCharacter::PlayerZoneTagChanged(const FGameplayTag Tag, int32 NewCount) {
}

int32 AORPlayerCharacter::Play2DCharacterAudio(UAkAudioEvent* AkAudioEvent) {
    return 0;
}

void AORPlayerCharacter::PauseStateChanged(bool bPaused) {
}

void AORPlayerCharacter::OwnedItemEventFired(ASQInventoryItem* Item, FGameplayTag EventTag, FGameplayTag FireModeTag, TEnumAsByte<EInventoryTransactionType> TransactionType) {
}





void AORPlayerCharacter::OnSweepAllComplete(TArray<FHitResult>& HitResults) {
}

void AORPlayerCharacter::OnLOSTraceAllComplete(TArray<FHitResult>& HitResults) {
}

void AORPlayerCharacter::OnJuggle() {
}



void AORPlayerCharacter::OnArmRaiseComplete() {
}

void AORPlayerCharacter::OnArmLowerComplete() {
}



void AORPlayerCharacter::JetpackDisabledTagChanged(const FGameplayTag Tag, int32 NewCount) {
}

bool AORPlayerCharacter::IsSliding() {
    return false;
}

bool AORPlayerCharacter::IsPlayerInSkippableNarrative() {
    return false;
}

bool AORPlayerCharacter::IsMultigunActive() {
    return false;
}

bool AORPlayerCharacter::IsInHouse() {
    return false;
}

bool AORPlayerCharacter::IsInDeepCutMeleeWithActor(AActor* Actor) {
    return false;
}

bool AORPlayerCharacter::IsInCombat() {
    return false;
}

bool AORPlayerCharacter::IsGliding() {
    return false;
}

bool AORPlayerCharacter::IsDashing() {
    return false;
}

void AORPlayerCharacter::IncForceCombatState() {
}

void AORPlayerCharacter::HandleGroundPoundImpact(const FHitResult& ImpactResult) {
}


UWidgetInteractionComponent* AORPlayerCharacter::GetWidgetInteractionComponent() {
    return NULL;
}

TArray<UMaterialInterface*> AORPlayerCharacter::GetVisibleCachedMaterials() {
    return TArray<UMaterialInterface*>();
}

UORPlayerTransformManager* AORPlayerCharacter::GetTransformManager() {
    return NULL;
}

AORFireableInventoryItem* AORPlayerCharacter::GetPrimaryEquippedItem() {
    return NULL;
}

AActor* AORPlayerCharacter::GetPlayerRadio() {
    return NULL;
}

float AORPlayerCharacter::GetMouseTurn() {
    return 0.0f;
}

float AORPlayerCharacter::GetMousePitch() {
    return 0.0f;
}

bool AORPlayerCharacter::GetKnifeyTalkingState() {
    return false;
}

bool AORPlayerCharacter::GetKnifeyShown() {
    return false;
}


bool AORPlayerCharacter::GetKnifeyExecuting() {
    return false;
}

TArray<UMaterialInterface*> AORPlayerCharacter::GetInvisibleCachedMaterials() {
    return TArray<UMaterialInterface*>();
}

bool AORPlayerCharacter::GetInfoScannerActive() const {
    return false;
}

float AORPlayerCharacter::GetGamepadTurn() {
    return 0.0f;
}

float AORPlayerCharacter::GetGamepadPitch() {
    return 0.0f;
}

AORInteractionStationManager* AORPlayerCharacter::GetCurrentInteractionStation() {
    return NULL;
}

UAnimInstance* AORPlayerCharacter::GetAnimInstance() {
    return NULL;
}

bool AORPlayerCharacter::GetAllowKnifeyShown() {
    return false;
}

void AORPlayerCharacter::ExitWaypointSearchArea_Implementation() {
}

void AORPlayerCharacter::EvasiveTagChanged(const FGameplayTag Tag, int32 NewCount) {
}

void AORPlayerCharacter::EnterWaypointSearchArea_Implementation() {
}


void AORPlayerCharacter::DelayedCombatMusicStop() {
}

void AORPlayerCharacter::DecForceCombatState() {
}


void AORPlayerCharacter::DeactivateInfoScanner() {
}

void AORPlayerCharacter::DamageInflicted(UObject* Damaged, const FHitResult& HitResult, float Damage, const FGameplayTagContainer& DamageTags, const bool WasKillingBlow) {
}

void AORPlayerCharacter::CheckReload() {
}

bool AORPlayerCharacter::CheckPlayerFeedbackOnDamage(AORCharacter* Target, const FHitResult& Hit, const FGameplayTagContainer& DamageTags, bool bWasKillingBlow, FGameplayTagContainer& OutFeedbackTags) {
    return false;
}

void AORPlayerCharacter::ChangeCombatState(const bool NewCombatState) {
}

bool AORPlayerCharacter::CanFireAtCurrentTarget() {
    return false;
}

void AORPlayerCharacter::CancelGroundPound() {
}

void AORPlayerCharacter::CachePlayerMaterials() {
}

void AORPlayerCharacter::CacheAttachedActorMaterials(AActor* Actor) {
}

void AORPlayerCharacter::ActivateRepeatInfoScanPing() {
}

void AORPlayerCharacter::ActivateInitialInfoScanPing() {
}

void AORPlayerCharacter::ActivateInfoScanner() {
}

void AORPlayerCharacter::ActivateGroundPoundTween() {
}

AORPlayerCharacter::AORPlayerCharacter() {
    this->FatalDamageShieldRecharge = 30.00f;
    this->MyPlayerController = NULL;
    this->SlideImpactTrigger = CreateDefaultSubobject<UORTriggerVolumeComponent>(TEXT("SlideImpactTrigger"));
    this->KillChain = 0;
    this->KillChainCurrentCountdownTime = 0.00f;
    this->KillChainMinKills = 2;
    this->KillChainCountdownTime = 5.00f;
    this->ResetKillChainCountdownWhenInflictingDamage = true;
    this->BankX = 0.00f;
    this->BankY = 0.00f;
    this->bIsPlayerInSkipNarrative = false;
    this->PlayerRadio = NULL;
    this->InputComponentClass = UORPlayerInputComponent::StaticClass();
    this->WidgetInteraction = CreateDefaultSubobject<UWidgetInteractionComponent>(TEXT("WidgetInteraction"));
    this->CurrentInteractionStation = NULL;
    this->TransformManager = NULL;
    this->LeftArm = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("PlayerLeftArm"));
    this->RightArm = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("PlayerRightArm"));
    this->ProjectileCollision = CreateDefaultSubobject<UCapsuleComponent>(TEXT("ProjectileCollision"));
    this->ArmMeshTable = NULL;
    this->ProjectileCollisionEvasiveRadius = 20.00f;
    this->BankStrength = 2.50f;
    this->BankMax = 100.00f;
    this->BaseTurnRate = 90.00f;
    this->BaseLookUpRate = 45.00f;
    this->DamageFromSingleSourceImmunityTime = 0.50f;
    this->DamageFromSingleSourceImmunityThreshold = 45.00f;
    this->Feedback_StackingGE = NULL;
    this->FeedbackSFX_Climax = NULL;
    this->FeedbackSFX_Positive = NULL;
    this->FeedbackSFX_Blocked = NULL;
    this->FeedbackSFX_Mitigated = NULL;
    this->CachedLastCameraRoll = 0.00f;
    this->bAllowDebugInventory = true;
    this->PlayerInventoryName = TEXT("PlayerInventory");
    this->AimOffsetAngle = 3.00f;
    this->LastTeleport = 0.00f;
    this->CrosshairAuthoredYRes = 1080.00f;
    this->CrosshairSpread = 0.00f;
    this->FocusedScannableComponent = NULL;
    this->AnchorBeamFXType = NULL;
    this->AnchorBeamSocketName = TEXT("Socket_Sidearm");
    this->AnchorBeamNoKnifeSocketName = TEXT("Socket_Sidearm");
    this->AnchorBeamKnifeySocketName = TEXT("Jaw_JNT");
    this->AnchorBeamSourceName = TEXT("BeamSource");
    this->AnchorBeamTargetName = TEXT("BeamTarget");
    this->AnchorBeamControlPointName = TEXT("ControlPoint");
    this->AnchorBeamControlPointTwoName = TEXT("ControlPointTwo");
    this->AnchorBeamControlPointOffset = 100.00f;
    this->AnchorBeamControlPointTwoOffset = 100.00f;
    this->AnchorBeamSpawnFXType = NULL;
    this->AnchorSpawnSocketName = TEXT("Socket_Sidearm");
    this->AnchorTargetHitFXType = NULL;
    this->bHasValidGroundPoundGoal = false;
    this->GroundPoundExplosionClass = NULL;
    this->bRotateCameraTowardsGroundPound = false;
    this->bRenderGroundPoundGoal = false;
    this->GroundPoundMaxPitch = 0.00f;
    this->GroundPoundMinPitch = 0.00f;
    this->GroundPoundCurrentPitch = 0.00f;
    this->InitialInfoScanType = NULL;
    this->RepeatInfoScanType = NULL;
    this->bInfoScannerActive = false;
    this->InitialInfoScanDelay = 0.00f;
    this->RepeatInfoScanDelay = 6.00f;
    this->InitialPingActorClass = NULL;
    this->RepeatPingActorClass = NULL;
    this->InitialInfoScanSFX = NULL;
    this->RepeatInfoScanSFX = NULL;
    this->InfoScanPingDistance = 2000.00f;
    this->InfoScanPingDuration = 10.00f;
    this->TimeSlowEaseIn = 0.50f;
    this->TimeSlowEaseOut = 0.50f;
    this->bInCombat = false;
    this->ForceCombatState = 0;
    this->bCombatMusicPlaying = false;
    this->bCanStartCombatMusic = true;
    this->LastGoodLocationTracker = CreateDefaultSubobject<UORLastGoodLocationTracker>(TEXT("LastGoodLocationTracker"));
    this->bMultigunActive = false;
    this->bInGameplayZone = true;
    this->DebugPathFootOffset = -16.00f;
    this->CalculatedDamageInflictedRTPC = 0.00f;
    this->JuggleCount = 0;
    this->JuggleCountForAchievement = 5;
    this->LastJuggled = NULL;
}

