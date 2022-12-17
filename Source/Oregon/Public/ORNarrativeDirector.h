#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "OREventTagRequest.h"
#include "ORNarrativeDirectorSequenceData.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "ItemEventData.h"
#include "EORPlayPriority.h"
#include "OROnNDSequenceFinishedSignatureDelegate.h"
#include "ORNarrativeDirector.generated.h"

class UObject;
class ULevelSequence;
class AORFireableInventoryItem;
class UORGlobalEventPayload;
class UDataTable;

UCLASS(Blueprintable)
class AORNarrativeDirector : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeBeforeUnloadingSequences;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UDataTable*> SequenceDataTables;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UDataTable*> CombatSequenceDataTables;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UDataTable*> NonCombatSequenceDataTables;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GunOutDelaySeconds;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOROnNDSequenceFinishedSignature OnNDSequenceFinishedEvent;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsPaused_Native;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOnlyOneLinePerTick;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIgnoreSequencesWithNoEventTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FOREventTagRequest> PostedEventTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EORPlayPriority, float> PriorityCleanupTimes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, float> CharacterCooldownTimes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeBetweenLines;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DefaultSequenceCleanupTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSuppressLezduitEvents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag KennySpeakerTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag GusSpeakerTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag SweezySpeakerTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag CreatureSpeakerTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag LezduitSpeakerTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<FGameplayTag> AllEventTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasShotInCombat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasCombatStarted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PlayerShotCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GunHeldTimeLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bGunOutTimerActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString LastPlayedSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FTimerHandle> UnloadTimerHandles;
    
public:
    AORNarrativeDirector();
protected:
    UFUNCTION(BlueprintCallable)
    void ZoneTypeChanged(bool bIsCombatZone);
    
    UFUNCTION(BlueprintCallable)
    void UnloadSpeakerSequences(FGameplayTag SpeakerTag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldShowDebugText() const;
    
public:
    UFUNCTION(BlueprintCallable)
    void SetSequenceDataDisabled(FGameplayTag SequenceDataTag, bool bIsDisabled);
    
    UFUNCTION(BlueprintCallable)
    void SetIsPausedKeepActivePlaying(bool bInIsPaused);
    
    UFUNCTION(BlueprintCallable)
    void SetIsPaused(bool bInIsPaused);
    
    UFUNCTION(BlueprintCallable)
    void RemoveSequenceTag(FGameplayTag SequenceDataTag);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void RemoveEventTag(UObject* WorldContextObject, FGameplayTag EventTag, AActor* ActorOverride);
    
    UFUNCTION(BlueprintCallable)
    void PostSequenceTag(FGameplayTag SequenceDataTag);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void PostEventTag(UObject* WorldContextObject, FGameplayTag EventTag, float LifetimeLength, FGameplayTag SpeakerOverrideTag, AActor* ActorOverride);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnSequenceTagRemove(const FGameplayTag& SequenceDataTag);
    
    UFUNCTION(BlueprintCallable)
    void OnSequenceStreamingFinished();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnRequested(const FGameplayTag& SequenceDataTag);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnPlayed(const FGameplayTag& SequenceDataTag, ULevelSequence* PlayedLevelSequence);
    
    UFUNCTION(BlueprintCallable)
    void OnGunJustOut(FGameplayTag GunJustOutTag);
    
    UFUNCTION(BlueprintCallable)
    void OnGunEquipped(AORFireableInventoryItem* WeaponItem);
    
    UFUNCTION(BlueprintCallable)
    void OnGlobalEventTagRemoved(const UORGlobalEventPayload* EventData);
    
    UFUNCTION(BlueprintCallable)
    void OnGlobalEventTagDispatched(const UORGlobalEventPayload* EventData);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnEnded(const FGameplayTag& SequenceDataTag, ULevelSequence* PlayedLevelSequence);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnCombatStarted();
    
    UFUNCTION(BlueprintCallable)
    void OnCombatEnded();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSequenceInCooldown(FGameplayTag SequenceDataTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPaused() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEventTagPosted(FGameplayTag EventTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HaveAnySequencesBeenPlayed(FGameplayTag SequenceDataTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasSequenceBeenPlayed(FGameplayTag SequenceDataTag, ULevelSequence* PlayedLevelSequence) const;
    
protected:
    UFUNCTION(BlueprintCallable)
    bool HasAnyGunOutTags(const FGameplayTagContainer& Container) const;
    
    UFUNCTION(BlueprintCallable)
    void HandleStreamGunGlobalSequences(FGameplayTag GunOutSpeakerTag);
    
    UFUNCTION(BlueprintCallable)
    void HandleSTPlay(FGameplayTag CharacterTag);
    
    UFUNCTION(BlueprintCallable)
    void HandleSpeakerUnregistered(FGameplayTag SpeakerTag);
    
    UFUNCTION(BlueprintCallable)
    void HandleNewSpeakerRegistered(FGameplayTag SpeakerTag);
    
    UFUNCTION(BlueprintCallable)
    void HandleGunEvents(TArray<FItemEventData> ActiveItemEvents);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetUnplayedSequenceIndices(FGameplayTag SequenceDataTag, TArray<int32>& OutUnplayedIndices) const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTimeSinceLineEndedForCharacter(FGameplayTag CharacterTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTimeSinceLineEnded() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTag GetSequenceWithMostPostedEventTags(FGameplayTagContainer SequencesToIgnore) const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FORNarrativeDirectorSequenceData GetSequenceDataForTag(FGameplayTag SequenceDataTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPlayCountForSequence(FGameplayTag SequenceDataTag, ULevelSequence* PlayedLevelSequence) const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetAllSequencesWithPostedTags(FGameplayTagContainer& OutSequenceTags, bool bIncludeSequencesWithNoEventTags) const;
    
    UFUNCTION(BlueprintCallable)
    int32 ForcePlaySequence(FGameplayTag SequenceDataTag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool DoesSequenceHavePostedEventTags(FGameplayTag SequenceDataTag) const;
    
    UFUNCTION(BlueprintCallable)
    void ClearPlayedCounts(FGameplayTag SequenceDataTag);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanSequenceBePlayed(FGameplayTag SequenceDataTag, bool bCallbacksOnly) const;
    
protected:
    UFUNCTION(BlueprintCallable)
    bool CanPlayGunOuts() const;
    
    UFUNCTION(BlueprintCallable)
    void AllowGunOuts();
    
};

