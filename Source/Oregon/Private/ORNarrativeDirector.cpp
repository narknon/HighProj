#include "ORNarrativeDirector.h"

class UObject;
class AActor;
class ULevelSequence;
class AORFireableInventoryItem;
class UORGlobalEventPayload;

void AORNarrativeDirector::ZoneTypeChanged(bool bIsCombatZone) {
}

void AORNarrativeDirector::UnloadSpeakerSequences(FGameplayTag SpeakerTag) {
}

bool AORNarrativeDirector::ShouldShowDebugText() const {
    return false;
}

void AORNarrativeDirector::SetSequenceDataDisabled(FGameplayTag SequenceDataTag, bool bIsDisabled) {
}

void AORNarrativeDirector::SetIsPausedKeepActivePlaying(bool bInIsPaused) {
}

void AORNarrativeDirector::SetIsPaused(bool bInIsPaused) {
}

void AORNarrativeDirector::RemoveSequenceTag(FGameplayTag SequenceDataTag) {
}

void AORNarrativeDirector::RemoveEventTag(UObject* WorldContextObject, FGameplayTag EventTag, AActor* ActorOverride) {
}

void AORNarrativeDirector::PostSequenceTag(FGameplayTag SequenceDataTag) {
}

void AORNarrativeDirector::PostEventTag(UObject* WorldContextObject, FGameplayTag EventTag, float LifetimeLength, FGameplayTag SpeakerOverrideTag, AActor* ActorOverride) {
}

void AORNarrativeDirector::OnSequenceTagRemove_Implementation(const FGameplayTag& SequenceDataTag) {
}

void AORNarrativeDirector::OnSequenceStreamingFinished() {
}

void AORNarrativeDirector::OnRequested_Implementation(const FGameplayTag& SequenceDataTag) {
}

void AORNarrativeDirector::OnPlayed_Implementation(const FGameplayTag& SequenceDataTag, ULevelSequence* PlayedLevelSequence) {
}

void AORNarrativeDirector::OnGunJustOut(FGameplayTag GunJustOutTag) {
}

void AORNarrativeDirector::OnGunEquipped(AORFireableInventoryItem* WeaponItem) {
}

void AORNarrativeDirector::OnGlobalEventTagRemoved(const UORGlobalEventPayload* EventData) {
}

void AORNarrativeDirector::OnGlobalEventTagDispatched(const UORGlobalEventPayload* EventData) {
}

void AORNarrativeDirector::OnEnded_Implementation(const FGameplayTag& SequenceDataTag, ULevelSequence* PlayedLevelSequence) {
}

void AORNarrativeDirector::OnCombatStarted() {
}

void AORNarrativeDirector::OnCombatEnded() {
}

bool AORNarrativeDirector::IsSequenceInCooldown(FGameplayTag SequenceDataTag) const {
    return false;
}

bool AORNarrativeDirector::IsPaused() const {
    return false;
}

bool AORNarrativeDirector::IsEventTagPosted(FGameplayTag EventTag) const {
    return false;
}

bool AORNarrativeDirector::HaveAnySequencesBeenPlayed(FGameplayTag SequenceDataTag) const {
    return false;
}

bool AORNarrativeDirector::HasSequenceBeenPlayed(FGameplayTag SequenceDataTag, ULevelSequence* PlayedLevelSequence) const {
    return false;
}

bool AORNarrativeDirector::HasAnyGunOutTags(const FGameplayTagContainer& Container) const {
    return false;
}

void AORNarrativeDirector::HandleStreamGunGlobalSequences(FGameplayTag GunOutSpeakerTag) {
}

void AORNarrativeDirector::HandleSTPlay(FGameplayTag CharacterTag) {
}

void AORNarrativeDirector::HandleSpeakerUnregistered(FGameplayTag SpeakerTag) {
}

void AORNarrativeDirector::HandleNewSpeakerRegistered(FGameplayTag SpeakerTag) {
}

void AORNarrativeDirector::HandleGunEvents(TArray<FItemEventData> ActiveItemEvents) {
}

void AORNarrativeDirector::GetUnplayedSequenceIndices(FGameplayTag SequenceDataTag, TArray<int32>& OutUnplayedIndices) const {
}

float AORNarrativeDirector::GetTimeSinceLineEndedForCharacter(FGameplayTag CharacterTag) const {
    return 0.0f;
}

float AORNarrativeDirector::GetTimeSinceLineEnded() const {
    return 0.0f;
}

FGameplayTag AORNarrativeDirector::GetSequenceWithMostPostedEventTags(FGameplayTagContainer SequencesToIgnore) const {
    return FGameplayTag{};
}

FORNarrativeDirectorSequenceData AORNarrativeDirector::GetSequenceDataForTag(FGameplayTag SequenceDataTag) const {
    return FORNarrativeDirectorSequenceData{};
}

int32 AORNarrativeDirector::GetPlayCountForSequence(FGameplayTag SequenceDataTag, ULevelSequence* PlayedLevelSequence) const {
    return 0;
}

void AORNarrativeDirector::GetAllSequencesWithPostedTags(FGameplayTagContainer& OutSequenceTags, bool bIncludeSequencesWithNoEventTags) const {
}

int32 AORNarrativeDirector::ForcePlaySequence(FGameplayTag SequenceDataTag) {
    return 0;
}

bool AORNarrativeDirector::DoesSequenceHavePostedEventTags(FGameplayTag SequenceDataTag) const {
    return false;
}

void AORNarrativeDirector::ClearPlayedCounts(FGameplayTag SequenceDataTag) {
}

bool AORNarrativeDirector::CanSequenceBePlayed(FGameplayTag SequenceDataTag, bool bCallbacksOnly) const {
    return false;
}

bool AORNarrativeDirector::CanPlayGunOuts() const {
    return false;
}

void AORNarrativeDirector::AllowGunOuts() {
}

AORNarrativeDirector::AORNarrativeDirector() {
    this->TimeBeforeUnloadingSequences = 30.00f;
    this->GunOutDelaySeconds = 0.50f;
    this->bIsPaused_Native = false;
    this->bOnlyOneLinePerTick = true;
    this->bIgnoreSequencesWithNoEventTags = true;
    this->TimeBetweenLines = 1.00f;
    this->DefaultSequenceCleanupTime = 10.00f;
    this->bSuppressLezduitEvents = false;
    this->bHasShotInCombat = false;
    this->bHasCombatStarted = false;
    this->PlayerShotCount = 0;
    this->GunHeldTimeLimit = 60.00f;
    this->bGunOutTimerActive = true;
}

