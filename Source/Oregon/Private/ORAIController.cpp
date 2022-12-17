#include "ORAIController.h"
#include "ORAIPerceptionComponent.h"

class UObject;
class AActor;
class UAbilitySystemComponent;
class APawn;
class AVolume;
class AORCharacter;
class UORAIScriptCommandBase;
class APlayerController;
class AOREncounterManager;

void AORAIController::UpdatePackLeader() {
}

void AORAIController::UpdatePackBlackboardValues() {
}

void AORAIController::UpdateDesireAttributes(float DeltaTime) {
}

void AORAIController::UpdateCornerCover() {
}

void AORAIController::TelegraphEnemyLocation(APawn* Enemy) {
}

bool AORAIController::ShouldProcessStimulus(AActor* Causer, FAIStimulus Stimulus) const {
    return false;
}

bool AORAIController::ShouldForgetTarget(AActor* MyTarget, const float TimeSinceLastTargetStimuli) const {
    return false;
}

bool AORAIController::ShouldFaceTarget() const {
    return false;
}

bool AORAIController::SetSquadAwareness(const EORAIHostileAwareness NewAwareness) {
    return false;
}

void AORAIController::SetMainTargetActorToPlayerPawn_Implementation() {
}

void AORAIController::SetMainTargetActor_Implementation(AActor* NewTargetActor) {
}

void AORAIController::SetHomeArea(const FORHomeArea& HomeArea) {
}

void AORAIController::SetHitReactsEnabled(bool bEnabled) {
}

void AORAIController::SetDeafAndDumb(float Duration) {
}

void AORAIController::SetCombatAnchorLocation(FVector NewAnchor) {
}

void AORAIController::SetAttractionPointPathfindingGroup(EORAttractionPointPathfindingGroup Group) {
}

void AORAIController::SetAllowAttractionPointsOutsideOfHomeArea(const bool AllowAttractionPointsOutsideofHomeArea) {
}

void AORAIController::SetAccuracyFactor(float InAmount) {
}

void AORAIController::ScheduleLoopingTargetEvaluationTimer() {
}

void AORAIController::ResetAIGameplayTagCounter(const FGameplayTag AIGameplayTag) {
}

bool AORAIController::RequestAttackTokenForTarget(AActor* AttackTarget, const FGameplayTag AttackTypeTag) {
    return false;
}

void AORAIController::ReleaseCurrentAttackToken() {
}

void AORAIController::ReleaseAttractionPoint() {
}

void AORAIController::ReduceAccuracyAfterDamage() {
}

void AORAIController::RecordCharacterAbilityUseAtTime(const FGameplayTag CharAbilityTag, const float GameTime) {
}

void AORAIController::PushScriptCommand(UORAIScriptCommandBase* ScriptCommand) {
}

void AORAIController::ProcessPlayerPerceptionUpdated_Implementation(AActor* Causer, const FAIStimulus& StimulusData) {
}

void AORAIController::PopScriptCommand() {
}

void AORAIController::PlayerPerceptionUpdated(AActor* Causer, FAIStimulus StimulusData, EORAIHostileAwareness ProcessorHostileAwareness) {
}

void AORAIController::OnTargetEvaluateTimerCallback() {
}

void AORAIController::OnEffectGameplayTagsChanged(FGameplayTag MatchingTag, int32 Count) {
}

void AORAIController::NoPlayerStimuli(EORAIHostileAwareness ProcessorHostileAwareness, float TimeSinceLastStimuli) {
}

void AORAIController::NonPlayerPerceptionUpdated(AActor* Causer, FAIStimulus StimulusData, EORAIHostileAwareness ProcessorHostileAwareness) {
}

void AORAIController::MainTargetTeamIdChanged(AORCharacter* TargetCharacter, FGenericTeamId NewTeamId, FGenericTeamId OldTeamId) {
}

void AORAIController::LerpFocusToTarget(AActor* LerpTargetActor, float LerpTime) {
}

void AORAIController::LerpFocusToLocation(const FVector& Target, float LerpTime) {
}

bool AORAIController::IsTeamHostileTowards(const AActor* Other) const {
    return false;
}

bool AORAIController::IsPointInHomeArea(const FVector& Position) const {
    return false;
}

bool AORAIController::IsPawnStationary() {
    return false;
}

bool AORAIController::IsOnPlayerTargetScreen(const APlayerController* TargetPlayerController, float SafeArea) const {
    return false;
}

bool AORAIController::IsFocusLerpedToTarget(AActor* LerpTargetActor) {
    return false;
}

bool AORAIController::IsFocusLerpedToLocation() {
    return false;
}

bool AORAIController::IsCharacterAbilityOffCooldown(const FGameplayTag AbilityTag) const {
    return false;
}

void AORAIController::InjectDefaultPawnBehaviorTreeOverrides() {
}

void AORAIController::IncreaseAIGameplayTagCounter(const FGameplayTag AIGameplayTag, const int32 Amount) {
}

void AORAIController::IncreaseAccuracyFactor(float InAmount) {
}

void AORAIController::IncreaseAccuracyAfterAttack() {
}

bool AORAIController::HasTakenRecentDamage(float DamageAmount, float LookbackTime) const {
    return false;
}

bool AORAIController::HasScriptCommands() const {
    return false;
}

bool AORAIController::HasLineOfSightToCurrentTarget() const {
    return false;
}

bool AORAIController::HasCurrentAttackToken() const {
    return false;
}

bool AORAIController::HasAttackTokenForTarget(const AActor* Target, const FGameplayTag AttackTypeTag) const {
    return false;
}

void AORAIController::HandleSightSenseUpdate_Implementation(AActor* Causer, const FAIStimulus& StimulusData, bool bSuccessfullySensed) {
}

void AORAIController::HandleHearingSenseUpdate_Implementation(AActor* Causer, const FAIStimulus& StimulusData) {
}

void AORAIController::HandleDamageSenseUpdate_Implementation(AActor* Causer, const FAIStimulus& StimulusData) {
}

float AORAIController::GetTimeSinceLostLineOfSightOnTarget() {
    return 0.0f;
}

float AORAIController::GetTimeSinceLastPathfindingBlock() {
    return 0.0f;
}

float AORAIController::GetTimeSinceGainedLineOfSightOnTarget() {
    return 0.0f;
}

void AORAIController::GetTargetRememberTime(bool& RememberForever, float& RememberTime) const {
}

UAbilitySystemComponent* AORAIController::GetPawnASC() const {
    return NULL;
}

bool AORAIController::GetPawnAbilityUsageDataForTag(const FGameplayTag AbilityTag, FORAbilityUsageData& OutAbilityData) const {
    return false;
}

AActor* AORAIController::GetMainTargetActor_Implementation() const {
    return NULL;
}

FORHomeArea AORAIController::GetHomeArea() const {
    return FORHomeArea{};
}

AOREncounterManager* AORAIController::GetEncounterManager() const {
    return NULL;
}

EORAICombatDisposition AORAIController::GetDisposition() const {
    return EORAICombatDisposition::Defensive;
}

float AORAIController::GetDamageForTimeInPastSinceNow(const float TimeInPastSinceNow) const {
    return 0.0f;
}

FORAttractionPointSubsystemQuery AORAIController::GetCurrentAttractionPointQuery() {
    return FORAttractionPointSubsystemQuery{};
}

EAttractionPointCoverType AORAIController::GetCoverType() {
    return EAttractionPointCoverType::None;
}

EAttractionPointCornerCoverType AORAIController::GetCornerCoverType() {
    return EAttractionPointCornerCoverType::None;
}

FVector AORAIController::GetCombatAnchorLocation(const FVector DefaultIfNotSet) const {
    return FVector{};
}

AVolume* AORAIController::GetClosestHomeAreaVolume() const {
    return NULL;
}

UObject* AORAIController::GetClaimedAttractionPoint() {
    return NULL;
}

bool AORAIController::GetCharacterAbilityMostRecentlyUsed(FORGameplayTagTimeData& AbilityData) const {
    return false;
}

float AORAIController::GetCharacterAbilityLastUseTime(const FGameplayTag CharAbilityTag, const float DefaultIfNotFound) const {
    return 0.0f;
}

float AORAIController::GetAveAccumulatedDamage() const {
    return 0.0f;
}

EORAttractionPointPathfindingGroup AORAIController::GetAttractionPointPathfindingGroup() const {
    return EORAttractionPointPathfindingGroup::Group1;
}

int32 AORAIController::GetAIGamplayTagCounterCount(const FGameplayTag AIGameplayTag) {
    return 0;
}

float AORAIController::GetAccuracyModifierAttribute() {
    return 0.0f;
}

float AORAIController::GetAccuracyFactor() {
    return 0.0f;
}

float AORAIController::GetAccumulatedDamage() const {
    return 0.0f;
}

void AORAIController::ForceCombatDisposition(EORAICombatDisposition Disposition) {
}

bool AORAIController::EvaluateAttractionPoint_Implementation(UObject* Object) {
    return false;
}

EORAIStatusEffect AORAIController::DetermineStatusEffect_Implementation() {
    return EORAIStatusEffect::None;
}

void AORAIController::DecreaseAccuracyFactor(float InAmount) {
}

bool AORAIController::Debug_AllowAttacks() const {
    return false;
}

void AORAIController::CommitSenseData() {
}

void AORAIController::ClearScriptCommands() {
}

void AORAIController::ClearOutAssistTargetEffects(float RadiusRange) {
}

void AORAIController::ClearForcedCombatDisposition() {
}

void AORAIController::ClearFocusLerp() {
}

void AORAIController::ClearCombatAnchorLocation() {
}

bool AORAIController::ClaimAttractionPoint(UObject* Point) {
    return false;
}

bool AORAIController::ChangeHostileAwareness(const EORAIHostileAwareness NewAwareness) {
    return false;
}

bool AORAIController::CanUseCharacterAbilityOnTarget(const FGameplayTag AbilityDataTag, const AActor* InTargetActor, const FORAbilityRequirementOverrideData& AbilityRequirementOverrides) const {
    return false;
}

void AORAIController::CancelLoopingTargetEvaluationTimer() {
}















bool AORAIController::AllowHitReacts() const {
    return false;
}

void AORAIController::AICharacterSpawnedFromPool(AORCharacter* SpawnedCharacter) {
}

void AORAIController::AICharacterReturnedToPool(AORCharacter* SpawnedCharacter) {
}

AORAIController::AORAIController() {
    this->MyORCharacter = NULL;
    this->LastSpottedPlayerTimeStamp = 0.00f;
    this->bUseNativePerceptionEventHandling = true;
    this->bUseHearingSenseToSetMainTargetInCombat = true;
    this->bTargetPlayerOnCombatActivation = true;
    this->DeafAndDumbDuration = 0.00f;
    this->bPreferCoverAttractionPoints = false;
    this->DamageAccumulatorSecondsToTrack = 5;
    this->CachedCombatBehaviorSubstate = EORAICombatBehaviorStates::ECB_Default;
    this->BehaviorTree = NULL;
    this->CombatDisposition = EORAICombatDisposition::Defensive;
    this->ClaimedAttractionPoint = NULL;
    this->bReleaseClaimedAttractionPointsOnDeath = true;
    this->AttractionPointPathfindingGroup = EORAttractionPointPathfindingGroup::Group1;
    this->bAllowAttractionPointsOutsideOfHomeArea = true;
    this->FocalPointLerpAlpha = 1.00f;
    this->FocalPointLerpTarget = NULL;
    this->AIPerceptionComp = CreateDefaultSubobject<UORAIPerceptionComponent>(TEXT("AIPerceptionComp"));
    this->bWantsInitialAttractionPoint = false;
    this->TargetActor = NULL;
    this->bTargetActorLineOfSight = false;
    this->InitialHostileAwareness = EORAIHostileAwareness::EHA_Unaware;
    this->CurrentHostileAwareness = EORAIHostileAwareness::EHA_None;
    this->CurrentHostileAwarenessTime = 0.00f;
    this->bTakeSquadAwareness = true;
    this->bUseAccuracyModel = false;
    this->bStationaryAccuracyLeading = false;
    this->OffscreenShots = 0;
    this->OffscreenShotsBeforeAccurate = 4;
    this->AccuracyFactor = 0.00f;
    this->MinAccuracyFactor = 0.00f;
    this->MaxAccuracyFactor = 2.00f;
    this->AccuracyScale = 1.00f;
    this->AccuracyScaleTimer = 0.00f;
    this->AccuracyOverride = 0.00f;
    this->AccuracyOverrideTimer = 0.00f;
    this->JukeLookbackTime = 0.75f;
    this->JukeSpeedThreshold = 400.00f;
    this->JukeAccuracyPenalty = 0.75f;
    this->AccuracyDecayTimer = 0.00f;
    this->StationaryTargetThreshold = 500.00f;
    this->AccuracyDecreaseAfterDamage = 1.25f;
    this->MaxAccuracyLagTime = 0.35f;
    this->MinAccuracyLagTime = 0.15f;
    this->MaxRecommendedAccuracyDistance = 50.00f;
    this->bAnimInstanceLookAtTarget = false;
}

