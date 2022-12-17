#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ORCharacter.h"
#include "ORAIPawnInterface.h"
#include "ORBTInjectionInterface.h"
#include "ORIKDataProviderInterface.h"
#include "ORSignificanceInterface.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "ORAIControllerSetupData.h"
#include "AwarenessChangeData.h"
#include "ORBTOverride.h"
#include "ORAbilityUsageData.h"
#include "ORAttractionPointSubsystemQuery.h"
#include "ORIKRuntimeData.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "GameplayEffectTypes.h"
#include "EInventoryTransactionType.h"
#include "EORAIStatusEffect.h"
#include "EORAIHostileAwareness.h"
#include "ORCharacterStatusEffectChangedSignatureDelegate.h"
#include "ORAICharacterJuggledSignatureDelegate.h"
#include "ORAICharacterTraversalLeapEndSignatureDelegate.h"
#include "ORAICharacterDiedSignatureDelegate.h"
#include "ORAICharacter.generated.h"

class UObject;
class AActor;
class UGameplayEffect;
class UGameplayAbility;
class ASQInventoryItem;
class UAkAudioEvent;
class UPrimitiveComponent;
class UMeshComponent;
class USplineComponent;
class AORAIController;
class UORAIAutoKillComponent;
class AORAICharacter;
class UORAISquad;
class UORAIScriptCommandBase;
class AOREncounterManager;
class UORHealthDropComponent;
class UORGravityFuckeryComponent;
class UORInteractorResult;
class UORPhysicalAnimationPrototypeComponent;
class AORPatrolRoute;
class UORProximitySenseTriggerVolume;
class UORTargetingFXComponent;
class UAnimSequence;
class UAnimMontage;
class UCurveFloat;

UCLASS(Blueprintable)
class OREGON_API AORAICharacter : public AORCharacter, public IORBTInjectionInterface, public IORAIPawnInterface, public IORSignificanceInterface, public IORIKDataProviderInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UORHealthDropComponent* HealthDropComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UORPhysicalAnimationPrototypeComponent* PhysicalAnimationComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UORProximitySenseTriggerVolume* ProximitySenseTriggerVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UORGravityFuckeryComponent* GravityFuckery;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UORAIAutoKillComponent* AIAutoKillComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag EnemyDescriptorTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer EnemyFamilyDescriptorTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bReserveAttackTokens;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUsePooling;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsInPool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform DefaultSkelMeshTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseFocusForAimVector;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AOREncounterManager* MyEncounterManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanRegisterAsNonEncounterEnemy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLastManStandingTriggered;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FORAttractionPointSubsystemQuery DefaultAttractionPointQuery;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FORAttractionPointSubsystemQuery PackFollowerAttractionPointQuery;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FORAIControllerSetupData ControllerSetupData_PROTOTYPE;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FORBTOverride> BehaviorTreeOverrides;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDebugEnableBTBehaviorBaseOverrideOnPossession;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAnimMontage*> StunAnimations_PROTOTYPE;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAnimMontage*> StunRecoveryAnimations_PROTOTYPE;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* Stun_AkEvent_PROTOTYPE;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* ExitStun_AkEvent_PROTOTYPE;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float IdleOverrideStartMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UORTargetingFXComponent* CachedTargetingFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAlwaysTrackTarget;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FORAICharacterDiedSignature OnAICharacterDiedEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FORAbilityUsageData> AbilitiesData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinDesiredRangeToTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxDesiredRangeToTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DesiredRangeToTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxTargetFocusRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayEffect> KnockupGEClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayEffect> KnockupDecayGEClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayEffect> SplatGEClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayEffect> SkidGEClass;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FORAICharacterJuggledSignature OnJuggleLaunched;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FORAICharacterJuggledSignature OnJuggled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AORPatrolRoute* PatrolRoute;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FORAICharacterTraversalLeapEndSignature OnTraversalLeapEnded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 TraversalTypeFlags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector TraversalDestination;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldTraversalLockRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator TraversalStartRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USplineComponent* TraversalSpline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* TraversalTimeCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TraversalLeapTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInTraversalLeap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ExtraPhysicsGravity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ExtraPhysicsGravityOnDeath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EORAIStatusEffect, TSubclassOf<UGameplayAbility>> StatusEffectAbilities;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayAbility> DeathAbilityClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EORAIStatusEffect CurrentStatusEffect;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FORCharacterStatusEffectChangedSignature OnStatusEffectChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EORAIHostileAwareness, FAwarenessChangeData> AwarenessStateData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayEffect> SlowNonCombatAwarenessMovementEffectClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayEffect> FastNonCombatAwarenessMovementEffectClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UseFastNonCombatMovement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagRequirements NDDeathEventTagRequirements;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagRequirements NDTakeDamageEventDamageTagRequirements;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag NDTakeDamageEventTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NDTakeDamageEventLifetime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UGameplayEffect>> DeathEffects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UGameplayEffect>> KillerEffects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBlendToRagdollOnDied;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bApplyPendingLaunchVelocityOnRagdoll;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AdditionalProjectileImpulseAfterDeath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AllowPostDeathKnockupTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayEffect> PostDeathKnockupImmunityClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisableCapsuleOnDeath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRequireDeathAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PostDeathSTUnregisterTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisableMovementOnDeath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bDeathAnimationHandled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bDeathAnimationFinished;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName DeathKnockupLaunchBone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DeathKnockupLaunchScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsKnockedUp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FORIKRuntimeData IKData;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UORAIScriptCommandBase*> BeginPlayScriptCommands;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UORAISquad* AISquad;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DesiredPackSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PackFormationDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanBeInPack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsPackLeader;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AORAICharacter* PackLeader;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 PackIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AORAICharacter*> Pack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PackAttackGlobalCooldownDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PackAssistGlobalCooldownDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float PackAttackGlobalCooldown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float PackAssistGlobalCooldown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<AORAICharacter*, float> PackAttackActorCooldown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AActor*> EnemyEffectActors;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTimerHandle DamageFlashTimerHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoPlayDamageFlashOnDamageTaken;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoPlayDamageFlashOnDied;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DamageFlashActiveTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* DamageFlashIntensityCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName DamageFlashMaterialParamName;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldBeConsideredForAggressiveBehavior;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AggressiveBehaviorSlotUsage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinDistanceToInteractable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InteractableTweenSpeed;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UORInteractorResult> InteractableResultType;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector ExecutionRelativeOffset;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float KnockupPhysicsScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WobbleStrength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SignificanceCategory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseSignificanceManagement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseSignificanceManagementForMeshes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ThrottledTickRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OutOfSightSigBoost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 SignificanceBucket;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TotalNecroMinionLifeSteal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RemainingNecroMinionLifeSteal;
    
    AORAICharacter();
protected:
    UFUNCTION(BlueprintCallable)
    void UnregisterFromST();
    
public:
    UFUNCTION(BlueprintCallable)
    void StopDamageFlash();
    
    UFUNCTION(BlueprintCallable)
    void StartTraversalLeapViaSpline();
    
    UFUNCTION(BlueprintCallable)
    void StartTraversalLeapViaPhysics(float GravityAcceleration);
    
    UFUNCTION(BlueprintCallable)
    void StartDamageFlash();
    
    UFUNCTION(BlueprintCallable)
    void SkipDeathAnimation();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SignificanceTickStateChanged(bool bTickEnabled);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SignificanceReducedTickStateChanged(bool bFullTickRate, float NewTickInterval);
    
    UFUNCTION(BlueprintCallable)
    bool ShouldSkipDeathAnimation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool ShouldBlendToRagdollOnDied() const;
    
public:
    UFUNCTION(BlueprintCallable)
    void SetUseFastNarrativeMovement(const bool NewUseFastNarrativeMovement);
    
    UFUNCTION(BlueprintCallable)
    void SetStatusEffect(EORAIStatusEffect Effect);
    
    UFUNCTION(BlueprintCallable)
    void SetPackAttackCooldown();
    
    UFUNCTION(BlueprintCallable)
    void SetIKEnabled(bool bNewEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetIdleOverride(UAnimSequence* Anim);
    
    UFUNCTION(BlueprintCallable)
    void SetDefaultAttractionPointQuery(const FORAttractionPointSubsystemQuery& AttractionPointQuery);
    
    UFUNCTION(BlueprintCallable)
    void SetAssignedPatrolRoute(AORPatrolRoute* NewRoute);
    
    UFUNCTION(BlueprintCallable)
    bool ReturnToPool();
    
    UFUNCTION(BlueprintCallable)
    void PlayDeathAnimation(UAnimMontage* DeathMontage);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OwnerItemEventFired(ASQInventoryItem* Item, FGameplayTag EventTag, FGameplayTag FireModeTag, TEnumAsByte<EInventoryTransactionType> TransactionType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPackFormed();
    
    UFUNCTION(BlueprintCallable)
    void OnHealthChanged(float Change, float NewValue, bool Silent);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnDeathAnimationEnded(UAnimMontage* Montage, bool bInterrupted);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnControllerHostileAwarenessChanged(AORAIController* ORAIController, const EORAIHostileAwareness OldAwareness, const EORAIHostileAwareness NewAwareness);
    
    UFUNCTION(BlueprintCallable)
    void OnCharacterMeshHitPostDeath(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    
    UFUNCTION(BlueprintCallable)
    void KnockupTagChanged(const FGameplayTag InTag, int32 NewCount);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOnPackAttackCooldown() const;
    
    UFUNCTION(BlueprintCallable)
    void HandleProximityEntered(AActor* Actor, int32 VolumeIndex);
    
    UFUNCTION(BlueprintCallable)
    void HandleDeathPhysicsBlendFinished();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTimeSinceTakenPlayerDamage() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FORAttractionPointSubsystemQuery GetDefaultAttractionPointQuery() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TArray<UMeshComponent*> GetDamageFlashMeshComponents();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AORPatrolRoute* GetAssignedPatrolRoute();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UORAISquad* GetAISquad() const;
    
    UFUNCTION(BlueprintCallable)
    AORAICharacter* GetActorToAssist();
    
    UFUNCTION(BlueprintCallable)
    TArray<AORAICharacter*> GetActorsISpawned();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    bool GetAbilityUsageDataForTag(const FGameplayTag AbilityTag, FORAbilityUsageData& OutAbilityData) const;
    
public:
    UFUNCTION(BlueprintCallable)
    void ExitMagwall();
    
    UFUNCTION(BlueprintCallable)
    void DisableKnockups();
    
protected:
    UFUNCTION(BlueprintCallable)
    void DeathAnimationTimedOut();
    
    UFUNCTION(BlueprintCallable)
    void ClearScriptCommands();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_SpawnedFromPool();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_ReturnedToPool();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnStatusEffectChanged(const EORAIStatusEffect NewStatusEffect);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnSpawnedInEncounter(AOREncounterManager* EncounterManager);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnRemovedFromEncounter(AOREncounterManager* EncounterManager);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnLastManStandingTriggered();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnHealthChanged(float NewValue, float Change);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnControllerHostileAwarenessChanged(AORAIController* ORAIController, const EORAIHostileAwareness OldAwareness, const EORAIHostileAwareness NewAwareness);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool BP_CanPostTakeDamageEventToND(UObject* Damager, const FHitResult& HitResult, float Damage, const FGameplayTagContainer& DamageTags);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BP_BeginShutdown();
    
    UFUNCTION(BlueprintCallable)
    void BeginShutdown();
    
    UFUNCTION(BlueprintCallable)
    void ActivateBestInteraction();
    
    
    // Fix for true pure virtual functions not being implemented
};

