#pragma once
#include "CoreMinimal.h"
#include "Curves/RichCurve.h"
#include "AIController.h"
#include "ORAttackTokenConsumerInterface.h"
#include "Engine/EngineTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DifficultyFloat -FallbackName=DifficultyFloat
#include "ORSenseConfigOverride.h"
#include "ORGameplayTagTimeData.h"
#include "ORSightTrackingData.h"
#include "ORAbilityUsageData.h"
#include "ORAbilityRequirementOverrideData.h"
#include "ORAttractionPointSubsystemQuery.h"
#include "AttackTokenHandle.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "Perception/AIPerceptionTypes.h"
#include "GenericTeamAgentInterface.h"
#include "ORHomeArea.h"
#include "EORAICombatDisposition.h"
#include "EORAICombatBehaviorStates.h"
#include "EORAIStatusEffect.h"
#include "EORAttractionPointPathfindingGroup.h"
#include "EORAIHostileAwareness.h"
#include "EAttractionPointCoverType.h"
#include "EAttractionPointCornerCoverType.h"
#include "ORAIMainTargetActorChangeDelegate.h"
#include "ORAIScriptCommandListChangeDelegate.h"
#include "ORAIHostileAwarenessChangeDelegate.h"
#include "ORAIController.generated.h"

class UObject;
class AActor;
class UAbilitySystemComponent;
class APawn;
class AVolume;
class AORCharacter;
class AORAICharacter;
class UAISenseConfig;
class UORAIScriptCommandBase;
class UORAIPerceptionComponent;
class APlayerController;
class AOREncounterManager;
class UBehaviorTree;

UCLASS(Abstract, Blueprintable)
class OREGON_API AORAIController : public AAIController, public IORAttackTokenConsumerInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AORAICharacter* MyORCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FORHomeArea MyHomeArea;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float LastSpottedPlayerTimeStamp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseNativePerceptionEventHandling;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseHearingSenseToSetMainTargetInCombat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTargetPlayerOnCombatActivation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float DeafAndDumbDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPreferCoverAttractionPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DamageAccumulatorSecondsToTrack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EORAICombatBehaviorStates CachedCombatBehaviorSubstate;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBehaviorTree* BehaviorTree;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EORAICombatDisposition CombatDisposition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UObject* ClaimedAttractionPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bReleaseClaimedAttractionPointsOnDeath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EORAttractionPointPathfindingGroup AttractionPointPathfindingGroup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowAttractionPointsOutsideOfHomeArea;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag HitReactTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag StunTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag StunImmuneTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag KnockedupTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag IncapacitatedTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag ElectrocutedTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag FrenziedTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag MindControlTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag RagdollTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FORSightTrackingData TargetActorSightData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SightPerceptionSocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector FocalPointOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float FocalPointLerpAlpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector FocalPointLerpStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector FocalPointLerpEnd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* FocalPointLerpTarget;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UORAIScriptCommandBase*> ScriptCommands;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FORAIScriptCommandListChange OnScriptCommandListChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UORAIPerceptionComponent* AIPerceptionComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bWantsInitialAttractionPoint;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTimerHandle TargetEvaluationTimerHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* TargetActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bTargetActorLineOfSight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, float> CharacterAbilityLastUsedTimes;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EORAIHostileAwareness InitialHostileAwareness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EORAIHostileAwareness CurrentHostileAwareness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float CurrentHostileAwarenessTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EORAIHostileAwareness, FORSenseConfigOverride> AwarenessSenseOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UAISenseConfig*> DefaultSensesConfigs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTakeSquadAwareness;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FORAIHostileAwarenessChange OnHostileAwarenessChange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseAccuracyModel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bStationaryAccuracyLeading;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 OffscreenShots;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 OffscreenShotsBeforeAccurate;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float AccuracyFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinAccuracyFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxAccuracyFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AccuracyScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AccuracyScaleTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AccuracyOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AccuracyOverrideTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float JukeLookbackTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float JukeSpeedThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float JukeAccuracyPenalty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float AccuracyDecayTimer;
    
    UPROPERTY(EditAnywhere)
    FRichCurve AccuracyDecayCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StationaryTargetThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDifficultyFloat AccuracyIncreaseAgainstStationaryTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDifficultyFloat AccuracyIncreaseAgainstMovingTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AccuracyDecreaseAfterDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxAccuracyLagTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinAccuracyLagTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxRecommendedAccuracyDistance;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FORAIMainTargetActorChange OnMainTargetActorChangeEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAnimInstanceLookAtTarget;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FAttackTokenHandle CurrentAttackTokenHandle;
    
public:
    AORAIController();
    UFUNCTION(BlueprintCallable)
    void UpdatePackLeader();
    
    UFUNCTION(BlueprintCallable)
    void UpdatePackBlackboardValues();
    
    UFUNCTION(BlueprintCallable)
    void UpdateDesireAttributes(float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void UpdateCornerCover();
    
    UFUNCTION(BlueprintCallable)
    void TelegraphEnemyLocation(APawn* Enemy);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldProcessStimulus(AActor* Causer, FAIStimulus Stimulus) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldForgetTarget(AActor* MyTarget, const float TimeSinceLastTargetStimuli) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldFaceTarget() const;
    
    UFUNCTION(BlueprintCallable)
    bool SetSquadAwareness(const EORAIHostileAwareness NewAwareness);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetMainTargetActorToPlayerPawn();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetMainTargetActor(AActor* NewTargetActor);
    
    UFUNCTION(BlueprintCallable)
    void SetHomeArea(const FORHomeArea& HomeArea);
    
    UFUNCTION(BlueprintCallable)
    void SetHitReactsEnabled(bool bEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SetDeafAndDumb(float Duration);
    
    UFUNCTION(BlueprintCallable)
    void SetCombatAnchorLocation(FVector NewAnchor);
    
    UFUNCTION(BlueprintCallable)
    void SetAttractionPointPathfindingGroup(EORAttractionPointPathfindingGroup Group);
    
    UFUNCTION(BlueprintCallable)
    void SetAllowAttractionPointsOutsideOfHomeArea(const bool AllowAttractionPointsOutsideofHomeArea);
    
    UFUNCTION(BlueprintCallable)
    void SetAccuracyFactor(float InAmount);
    
protected:
    UFUNCTION(BlueprintCallable)
    void ScheduleLoopingTargetEvaluationTimer();
    
public:
    UFUNCTION(BlueprintCallable)
    void ResetAIGameplayTagCounter(const FGameplayTag AIGameplayTag);
    
    UFUNCTION(BlueprintCallable)
    bool RequestAttackTokenForTarget(AActor* AttackTarget, const FGameplayTag AttackTypeTag);
    
    UFUNCTION(BlueprintCallable)
    void ReleaseCurrentAttackToken();
    
    UFUNCTION(BlueprintCallable)
    void ReleaseAttractionPoint();
    
    UFUNCTION(BlueprintCallable)
    void ReduceAccuracyAfterDamage();
    
    UFUNCTION(BlueprintCallable)
    void RecordCharacterAbilityUseAtTime(const FGameplayTag CharAbilityTag, const float GameTime);
    
    UFUNCTION(BlueprintCallable)
    void PushScriptCommand(UORAIScriptCommandBase* ScriptCommand);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ProcessPlayerPerceptionUpdated(AActor* Causer, const FAIStimulus& StimulusData);
    
    UFUNCTION(BlueprintCallable)
    void PopScriptCommand();
    
    UFUNCTION(BlueprintCallable)
    void PlayerPerceptionUpdated(AActor* Causer, FAIStimulus StimulusData, EORAIHostileAwareness ProcessorHostileAwareness);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnTargetEvaluateTimerCallback();
    
    UFUNCTION(BlueprintCallable)
    void OnEffectGameplayTagsChanged(FGameplayTag MatchingTag, int32 Count);
    
public:
    UFUNCTION(BlueprintCallable)
    void NoPlayerStimuli(EORAIHostileAwareness ProcessorHostileAwareness, float TimeSinceLastStimuli);
    
    UFUNCTION(BlueprintCallable)
    void NonPlayerPerceptionUpdated(AActor* Causer, FAIStimulus StimulusData, EORAIHostileAwareness ProcessorHostileAwareness);
    
    UFUNCTION(BlueprintCallable)
    void MainTargetTeamIdChanged(AORCharacter* TargetCharacter, FGenericTeamId NewTeamId, FGenericTeamId OldTeamId);
    
protected:
    UFUNCTION(BlueprintCallable)
    void LerpFocusToTarget(AActor* LerpTargetActor, float LerpTime);
    
    UFUNCTION(BlueprintCallable)
    void LerpFocusToLocation(const FVector& Target, float LerpTime);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTeamHostileTowards(const AActor* Other) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPointInHomeArea(const FVector& Position) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPawnStationary();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOnPlayerTargetScreen(const APlayerController* TargetPlayerController, float SafeArea) const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFocusLerpedToTarget(AActor* LerpTargetActor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFocusLerpedToLocation();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCharacterAbilityOffCooldown(const FGameplayTag AbilityTag) const;
    
    UFUNCTION(BlueprintCallable)
    void InjectDefaultPawnBehaviorTreeOverrides();
    
    UFUNCTION(BlueprintCallable)
    void IncreaseAIGameplayTagCounter(const FGameplayTag AIGameplayTag, const int32 Amount);
    
    UFUNCTION(BlueprintCallable)
    void IncreaseAccuracyFactor(float InAmount);
    
    UFUNCTION(BlueprintCallable)
    void IncreaseAccuracyAfterAttack();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasTakenRecentDamage(float DamageAmount, float LookbackTime) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasScriptCommands() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasLineOfSightToCurrentTarget() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasCurrentAttackToken() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasAttackTokenForTarget(const AActor* Target, const FGameplayTag AttackTypeTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HandleSightSenseUpdate(AActor* Causer, const FAIStimulus& StimulusData, bool bSuccessfullySensed);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HandleHearingSenseUpdate(AActor* Causer, const FAIStimulus& StimulusData);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HandleDamageSenseUpdate(AActor* Causer, const FAIStimulus& StimulusData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTimeSinceLostLineOfSightOnTarget();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTimeSinceLastPathfindingBlock();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTimeSinceGainedLineOfSightOnTarget();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetTargetRememberTime(bool& RememberForever, float& RememberTime) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAbilitySystemComponent* GetPawnASC() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    bool GetPawnAbilityUsageDataForTag(const FGameplayTag AbilityTag, FORAbilityUsageData& OutAbilityData) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    AActor* GetMainTargetActor() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FORHomeArea GetHomeArea() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AOREncounterManager* GetEncounterManager() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EORAICombatDisposition GetDisposition() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDamageForTimeInPastSinceNow(const float TimeInPastSinceNow) const;
    
    UFUNCTION(BlueprintCallable)
    FORAttractionPointSubsystemQuery GetCurrentAttractionPointQuery();
    
    UFUNCTION(BlueprintCallable)
    EAttractionPointCoverType GetCoverType();
    
    UFUNCTION(BlueprintCallable)
    EAttractionPointCornerCoverType GetCornerCoverType();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetCombatAnchorLocation(const FVector DefaultIfNotSet) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AVolume* GetClosestHomeAreaVolume() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UObject* GetClaimedAttractionPoint();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCharacterAbilityMostRecentlyUsed(FORGameplayTagTimeData& AbilityData) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCharacterAbilityLastUseTime(const FGameplayTag CharAbilityTag, const float DefaultIfNotFound) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetAveAccumulatedDamage() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EORAttractionPointPathfindingGroup GetAttractionPointPathfindingGroup() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetAIGamplayTagCounterCount(const FGameplayTag AIGameplayTag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetAccuracyModifierAttribute();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetAccuracyFactor();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetAccumulatedDamage() const;
    
    UFUNCTION(BlueprintCallable)
    void ForceCombatDisposition(EORAICombatDisposition Disposition);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool EvaluateAttractionPoint(UObject* Object);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    EORAIStatusEffect DetermineStatusEffect();
    
public:
    UFUNCTION(BlueprintCallable)
    void DecreaseAccuracyFactor(float InAmount);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool Debug_AllowAttacks() const;
    
    UFUNCTION(BlueprintCallable)
    void CommitSenseData();
    
    UFUNCTION(BlueprintCallable)
    void ClearScriptCommands();
    
    UFUNCTION(BlueprintCallable)
    void ClearOutAssistTargetEffects(float RadiusRange);
    
    UFUNCTION(BlueprintCallable)
    void ClearForcedCombatDisposition();
    
protected:
    UFUNCTION(BlueprintCallable)
    void ClearFocusLerp();
    
public:
    UFUNCTION(BlueprintCallable)
    void ClearCombatAnchorLocation();
    
    UFUNCTION(BlueprintCallable)
    bool ClaimAttractionPoint(UObject* Point);
    
    UFUNCTION(BlueprintCallable)
    bool ChangeHostileAwareness(const EORAIHostileAwareness NewAwareness);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanUseCharacterAbilityOnTarget(const FGameplayTag AbilityDataTag, const AActor* InTargetActor, const FORAbilityRequirementOverrideData& AbilityRequirementOverrides) const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void CancelLoopingTargetEvaluationTimer();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnMainTargetActorChange(AActor* OldMainTarget, AActor* NewMainTarget);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnLostSightOfMainTarget();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnLoopingTargetEvaluationTimer();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnLastSquadMemberAlive();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnLastManStandingTriggered();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnForgotMainTarget();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnAICharacterTeamIDChanged(FGenericTeamId NewID);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnAICharacterSpawnedInEncounter(AOREncounterManager* EncounterManager);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_HostileAwarenessChange(const EORAIHostileAwareness OldAwareness, const EORAIHostileAwareness NewAwareness);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_AICharacterTookDamage(UObject* Damager, const FHitResult& HitResult, const float Damage, const FGameplayTagContainer& DamageTags);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_AICharacterSpawnedFromPool(AORCharacter* SpawnedCharacter);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_AICharacterReturnedToPool(AORCharacter* ReturnedCharacter);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_AICharacterInflictedDamage(UObject* DamageVictim, const FHitResult& HitResult, const float Damage, const bool WasKillingBlow);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_AICharacterDied(UObject* Killer, const FHitResult& HitResult, const FGameplayTagContainer& DamageTags);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool AllowHitReacts() const;
    
    UFUNCTION(BlueprintCallable)
    void AICharacterSpawnedFromPool(AORCharacter* SpawnedCharacter);
    
    UFUNCTION(BlueprintCallable)
    void AICharacterReturnedToPool(AORCharacter* SpawnedCharacter);
    
    
    // Fix for true pure virtual functions not being implemented
};

