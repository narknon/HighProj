#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ORVocalizationAkSwitches.h"
#include "AbilitySystemInterface.h"
#include "STPossessableInterface.h"
#include "LookAtTargetInterface.h"
#include "GameFramework/Character.h"
#include "ORDamageableInterface.h"
#include "OREffectsTargetInterface.h"
#include "ORDamagerInterface.h"
#include "ORInteractorInterface.h"
#include "ORPossessedPawnAbilityInterface.h"
#include "GameplayTagAssetInterface.h"
#include "Perception/AISightTargetInterface.h"
#include "GenericTeamAgentInterface.h"
#include "Engine/EngineTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "HitZone.h"
#include "ActionData.h"
#include "RuntimeActionData.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "GameFramework/Character.h"
#include "GenericTeamAgentInterface.h"
#include "EORFoot.h"
#include "EFactionTeamIDs.h"
#include "EORVocalizationType.h"
#include "OROnDiedSignatureDelegate.h"
#include "ORCharacterReturnedToPoolSignatureDelegate.h"
#include "ORCharacterSpawnedFromPoolSignatureDelegate.h"
#include "MoveBlockedByEventDelegate.h"
#include "ZiplineChangeEventDelegate.h"
#include "InventoryLoadCompleteDelegate.h"
#include "OROnSkeletalMeshMergedDelegate.h"
#include "ORCharacterTeamChangedSignatureDelegate.h"
#include "OROnDamageInflictedSignatureDelegate.h"
#include "OROnDamageTakenSignatureDelegate.h"
#include "ORCharacter.generated.h"

class UObject;
class AActor;
class UGameplayEffect;
class UGameplayAbility;
class UAkAudioEvent;
class UAkSwitchValue;
class UNiagaraSystem;
class USTPossessableComponent;
class USkeletalMesh;
class UORAbilitySystemComponent;
class UORCharacterAttributeSet;
class UORAkComponent;
class AORPickupBase;
class UORAttentionComponent;
class UORCharacterInventory;
class UORDamageHandlerComponent_Character;
class AORFireableInventoryItem;
class UORInteractorResult;
class UORInteractableComponent;
class UORPossessableComponent;
class UORTargetableComponent_Character;
class UORTriggerSourceCharComponent;
class UORVocalizationComponent;
class UCurveFloat;
class UDataTable;
class UParticleSystem;
class UPawnNoiseEmitterComponent;

UCLASS(Blueprintable)
class AORCharacter : public ACharacter, public IAbilitySystemInterface, public IGenericTeamAgentInterface, public IORDamageableInterface, public IOREffectsTargetInterface, public IORDamagerInterface, public ISTPossessableInterface, public IAISightTargetInterface, public ILookAtTargetInterface, public IGameplayTagAssetInterface, public IORInteractorInterface, public IORPossessedPawnAbilityInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FORCharacterSpawnedFromPoolSignature OnSpawnedFromPool;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FORCharacterReturnedToPoolSignature OnReturnedToPool;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOROnDamageTakenSignature OnDamageTakenEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOROnDamageTakenSignature OnDamageAttemptedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOROnDamageInflictedSignature OnDamageInflictedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOROnDamageTakenSignature OnDamageAmplifiedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOROnDamageTakenSignature OnDamageMitigatedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOROnDamageTakenSignature OnDamageBlockedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FORCharacterTeamChangedSignature OnTeamIdChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LastTimeDamageMitgated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LastTimeDamageBlocked;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOROnDiedSignature OnDiedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInventoryLoadComplete OnInventoryLoadCompleteEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOROnSkeletalMeshMerged OnSkeletalMeshMerged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLandedSignature OnLandedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMoveBlockedByEvent OnMoveBlockedBy;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USkeletalMesh* NewMergedMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FHitZone> HitZones;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UORDamageHandlerComponent_Character* DamageHandler;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer BloodDamageTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraSystem* NiagaraBloodVFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor NiagaraBloodColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* CascadeBloodVFX;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoCleanup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ADSOn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGenericTeamId TeamID;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UORAbilitySystemComponent* AbilitySystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UORCharacterAttributeSet> AttributeType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* AttributeDefaults;
    
    UPROPERTY(EditAnywhere, Export)
    TWeakObjectPtr<UORCharacterAttributeSet> CachedAttribs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDoRuntimeSkeletalMeshMerge;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, TSubclassOf<UGameplayAbility>> ActionDataMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FActionData> ActionData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer StartupGameplayTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UGameplayEffect>> StartupEffects;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FRuntimeActionData> ActionMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasInventory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UORCharacterInventory* Inventory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AimSourceSocket;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector AimSourceOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<AORFireableInventoryItem>> DisabledFireables;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UORTargetableComponent_Character* Targetable;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPawnNoiseEmitterComponent* NoiseEmitter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UORTriggerSourceCharComponent* TriggerSourceComponent;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UORPossessableComponent* ORPossessableComp;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UORAttentionComponent* ORAttentionComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector AttentionOffset;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UORVocalizationComponent* ORVoclizationComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Loudness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxFootstepSoundRange;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* VocalizationAkEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FORVocalizationAkSwitches VocalizationAkSwitches;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkSwitchValue* CharacterAkSwitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* FootstepAkEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* RustleAkEvent;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, UORAkComponent*> GameplayTagToORAKComponentMap;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* EnterTimeDilationTransitionCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* ExitTimeDilationTransitionCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float OldTimeDilation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float GoalTimeDilation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float TimeDilationProgress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bActiveTimeDilation;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FZiplineChangeEvent ZiplineChangeEvent;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UORInteractorResult* ActiveInteractorResult;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxInteractableDistance;
    
    UPROPERTY(EditAnywhere, Export)
    TWeakObjectPtr<UORInteractableComponent> BestInteractable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UORInteractableComponent*> CurrentInteractables;
    
    AORCharacter();
    UFUNCTION(BlueprintCallable)
    void TrySkeletalMeshMerge();
    
    UFUNCTION(BlueprintCallable)
    void SetupSkeletalMeshMerge(bool bAsync);
    
    UFUNCTION(BlueprintCallable)
    void SetTeamIdByFaction(const TEnumAsByte<EFactionTeamIDs> NewFactionID);
    
    UFUNCTION(BlueprintCallable)
    void SetTeamId(const FGenericTeamId NewID);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetRootMotionTranslationScale(float InScale);
    
    UFUNCTION(BlueprintCallable)
    void SetHitZoneState(FName HitZoneName, bool bNewState);
    
    UFUNCTION(BlueprintCallable)
    void SetHitZoneDamageMod(FName HitZoneName, float DamageMod);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void SetCurrentHealth(float HealthValue) const;
    
    UFUNCTION(BlueprintCallable)
    void SetCharacterAkSwitches();
    
    UFUNCTION(BlueprintCallable)
    void SetADSState(bool bADSOn);
    
    UFUNCTION(BlueprintCallable)
    void ResetJumpCount();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void RemoveEventTagForCharacter(const FGameplayTag EventTag);
    
    UFUNCTION(BlueprintCallable)
    void PostEventTagForCharacter(const FGameplayTag EventTag, const float LifetimeLength);
    
    UFUNCTION(BlueprintCallable)
    int32 PlayVocalizationAudioEvent(UAkAudioEvent* Event);
    
    UFUNCTION(BlueprintCallable)
    bool PlayVocalizationAudio(EORVocalizationType VocalizationType);
    
    UFUNCTION(BlueprintCallable)
    bool PlayFootstepAudio(EORFoot Foot);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnCleanup();
    
public:
    UFUNCTION(BlueprintCallable)
    void KnockupLaunchCharacter(FVector LaunchVelocity, bool bXYOverride, bool bZOverride);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_InventoryReady();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void K2_ADSStateChanged(bool bADSOn);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsHitZoneEnabled(const FHitZone& HitZone) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFullHealth() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEnemyActor(const AActor* OtherActor) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCrouching();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAliveAndWell() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsAbilityActive(FName ActionName);
    
    UFUNCTION(BlueprintCallable)
    void ImmediateCharacterTimeDilationTransition();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTimeSinceLastDamageTaken() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetRecoilOffsets();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetRecentMovementAmount();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetRecentLocationFromActor(const AActor* SourceActor, float MinTime, float MaxTime, float RecommendedMinDistance) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetRecentLocation(float LookbackTimeInSeconds) const;
    
    UFUNCTION(BlueprintCallable)
    UORAkComponent* GetORAkComponent(FGameplayTag GameplayTag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetJukeFactor(float LookbackTime) const;
    
    UFUNCTION(BlueprintCallable)
    FHitZone GetHitZoneForBone(FName BoneName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AORFireableInventoryItem* GetEquippedPrimaryItem();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrentHealthPct() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrentHealthMax() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrentHealth() const;
    
    UFUNCTION(BlueprintCallable)
    FVector GetAimVector();
    
    UFUNCTION(BlueprintCallable)
    FVector GetAimSourceLocation();
    
    UFUNCTION(BlueprintCallable)
    void ForceKill(UObject* OptionalDamager, FHitResult OptionalHitResult, FGameplayTagContainer OptionalDamageTags);
    
    UFUNCTION(BlueprintCallable)
    void FinalizeSkeletalMeshMerge(USkeletalMesh* MergedMesh);
    
    UFUNCTION(BlueprintCallable)
    void EndActivateAbility(FName ActionName);
    
    UFUNCTION(BlueprintCallable)
    void EnableFireableItem(TSubclassOf<AORFireableInventoryItem> ItemToEnable);
    
    UFUNCTION(BlueprintCallable)
    void DoSkeletalMeshMerge();
    
    UFUNCTION(BlueprintCallable)
    void DisableFireableItem(TSubclassOf<AORFireableInventoryItem> ItemToDisable);
    
protected:
    UFUNCTION(BlueprintCallable)
    void Cleanup();
    
    UFUNCTION(BlueprintCallable)
    void CharacterTimeDilationChanged(float Diff, float NewValue);
    
    UFUNCTION(BlueprintCallable)
    void CharacterLifeSpanChanged(float Diff, float NewValue);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanTakePickup(AORPickupBase* PickupItem);
    
    UFUNCTION(BlueprintCallable)
    void CancelAllFireModes();
    
    UFUNCTION(BlueprintCallable)
    void CancelAbility(FName ActionName);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BP_PostEventTagForCharacter(const FGameplayTag EventTag, const float LifetimeLength);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_CharacterLifeSpanExpired();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool BP_CanTakePickup(AORPickupBase* PickupItem);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool BP_CanFireItem(AORFireableInventoryItem* Item, FGameplayTag Mode);
    
    UFUNCTION(BlueprintCallable)
    void ActivateAbility(FName ActionName);
    
    
    // Fix for true pure virtual functions not being implemented
    UFUNCTION(BlueprintCallable)
    USTPossessableComponent* GetPossessableComponent() const override PURE_VIRTUAL(GetPossessableComponent, return NULL;);
    
    UFUNCTION(BlueprintCallable)
    bool HasMatchingGameplayTag(FGameplayTag TagToCheck) const override PURE_VIRTUAL(HasMatchingGameplayTag, return false;);
    
    UFUNCTION(BlueprintCallable)
    bool HasAnyMatchingGameplayTags(const FGameplayTagContainer& TagContainer) const override PURE_VIRTUAL(HasAnyMatchingGameplayTags, return false;);
    
    UFUNCTION(BlueprintCallable)
    bool HasAllMatchingGameplayTags(const FGameplayTagContainer& TagContainer) const override PURE_VIRTUAL(HasAllMatchingGameplayTags, return false;);
    
    UFUNCTION(BlueprintCallable)
    void GetOwnedGameplayTags(FGameplayTagContainer& TagContainer) const override PURE_VIRTUAL(GetOwnedGameplayTags,);
    
};

