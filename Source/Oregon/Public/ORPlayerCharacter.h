#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "SQFiringResultResponderInterface.h"
#include "SQProjectileImpactInterface.h"
#include "ORCharacter.h"
#include "Engine/EngineTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DifficultyInt -FallbackName=DifficultyInt
#include "RecoilKickInfo.h"
#include "TimeSlowHandle.h"
#include "ScalableFloat.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "GameplayEffectTypes.h"
#include "EInventoryTransactionType.h"
#include "ETransformState.h"
#include "EPlayerSkinTone.h"
#include "PlayerArmMeshUpdatedDelegate.h"
#include "KnifeyExecutingStateChangedDelegate.h"
#include "KnifeyTalkingStateChangedDelegate.h"
#include "ForceArmRigTransitionEventDelegate.h"
#include "MeleeEventDelegate.h"
#include "PlayerPossessionChangedDelegate.h"
#include "PlayerFiringEventDelegate.h"
#include "TetherAnchorVFXUpdateDelegate.h"
#include "TetherEventDelegate.h"
#include "AbilityProgressUpdatedDelegate.h"
#include "CrosshairSpreadUpdatedDelegate.h"
#include "CrosshairLocationUpdatedDelegate.h"
#include "CrosshairTargetUpdatedDelegate.h"
#include "InfoScanStateChangedDelegate.h"
#include "PlayerJetpackStateChangedDelegate.h"
#include "PlayerZoneChangedDelegate.h"
#include "PlayerCombatStateChangedDelegate.h"
#include "PlayerGroundPoundTargetUpdatedDelegate.h"
#include "PlayerGroundPoundCanceledDelegate.h"
#include "PlayerGroundPoundTweenStartedDelegate.h"
#include "PlayerGroundPoundImpactedDelegate.h"
#include "PlayerTeleportedEventDelegate.h"
#include "AnchorPullEventDelegate.h"
#include "PlayerJumpedDelegate.h"
#include "ORPlayerCharacter.generated.h"

class UObject;
class AActor;
class UGameplayEffect;
class ASQExplosionActor;
class ASQInventoryItem;
class UAkAudioEvent;
class UPrimitiveComponent;
class UNiagaraSystem;
class UAnimInstance;
class UMeshComponent;
class USkeletalMeshComponent;
class AORAICharacter;
class AORFireableInventoryItem;
class UORGlobalEventPayload;
class UORTriggerVolumeComponent;
class AORInteractionStationManager;
class UORInteractableComponent;
class AORInfoScanPingActor;
class UORLastGoodLocationTracker;
class UORPlayerTransformManager;
class UORPlayerInputComponent;
class AORPlayerController;
class UORPlayerAttributeSet;
class UCapsuleComponent;
class UORScannableComponent;
class UMaterialInterface;
class UWidgetInteractionComponent;
class UDataTable;

UCLASS(Blueprintable)
class OREGON_API AORPlayerCharacter : public AORCharacter, public ISQFiringResultResponderInterface, public ISQProjectileImpactInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerPossessionChanged PossessionChangedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FForceArmRigTransitionEvent OnArmLowerCompleteEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FForceArmRigTransitionEvent OnArmRaiseCompleteEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerArmMeshUpdated OnPlayerArmMeshUpdated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FatalDamageShieldRecharge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AORPlayerController* MyPlayerController;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerJumped PlayerJumpedDelegate;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UORTriggerVolumeComponent* SlideImpactTrigger;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 KillChain;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float KillChainCurrentCountdownTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 KillChainMinKills;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float KillChainCountdownTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ResetKillChainCountdownWhenInflictingDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDifficultyInt ConsecutiveDeathsToRechargeArmor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDifficultyInt ConsecutiveDeathsToRechargeGatteral;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BankX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BankY;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTetherEvent TetherEventDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTetherAnchorVFXUpdate AnchorVFXUpdateEventDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMeleeEvent MeleeEventDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKnifeyTalkingStateChanged OnKnifeyTalkingStateChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKnifeyExecutingStateChanged OnKnifeyExecutingStateChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsPlayerInSkipNarrative;
    
    UPROPERTY(EditAnywhere, Export)
    TWeakObjectPtr<UORPlayerAttributeSet> CachedPlayerAttribs;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerFiringEvent OnPlayerFiringFailed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* PlayerRadio;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UGameplayEffect>> KillEffects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UORPlayerInputComponent> InputComponentClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidgetInteractionComponent* WidgetInteraction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AORInteractionStationManager* CurrentInteractionStation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UORPlayerTransformManager* TransformManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* LeftArm;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* RightArm;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCapsuleComponent* ProjectileCollision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* ArmMeshTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EPlayerSkinTone, UMaterialInterface*> PlayerSkinToneMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UMeshComponent*> OwnedSkelMeshes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ProjectileCollisionEvasiveRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Bank;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector BankAcceleration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BankStrength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BankMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BaseTurnRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BaseLookUpRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRecoilKickInfo ActiveKickInfo;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector CurrentKickOffsets;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRecoilKickInfo ActiveRecoilInfo;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector ActiveRecoilOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector PostRecoilOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, int32> AttackTokensConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DamageFromSingleSourceImmunityTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DamageFromSingleSourceImmunityThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayEffect> Feedback_StackingGE;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* FeedbackSFX_Climax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* FeedbackSFX_Positive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* FeedbackSFX_Blocked;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* FeedbackSFX_Mitigated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CachedLastCameraRoll;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator UnpossessedCameraRotationCache;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowDebugInventory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PlayerInventoryName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AimOffsetAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float LastTeleport;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCrosshairTargetUpdated OnCrosshairTargetUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCrosshairLocationUpdated OnCrosshairLocationUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCrosshairSpreadUpdated OnCrosshairSpreadUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAbilityProgressUpdated OnAbilityProgressUpdated;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CrosshairAuthoredYRes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D CrosshairLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CrosshairSpread;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UORScannableComponent* FocusedScannableComponent;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerTeleportedEvent OnPlayerTeleported;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAnchorPullEvent AnchorPullEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraSystem* AnchorBeamFXType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AnchorBeamSocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AnchorBeamNoKnifeSocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AnchorBeamKnifeySocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AnchorBeamSourceName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AnchorBeamTargetName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AnchorBeamControlPointName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AnchorBeamControlPointTwoName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AnchorBeamControlPointOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AnchorBeamControlPointTwoOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraSystem* AnchorBeamSpawnFXType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AnchorSpawnSocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraSystem* AnchorTargetHitFXType;
    
    UPROPERTY(EditAnywhere, Export, Transient)
    TWeakObjectPtr<UORInteractableComponent> CurrentAutoAttachAnchor;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerGroundPoundImpacted GroundPoundImpactEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerGroundPoundTweenStarted GroundPoundTweenStartEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerGroundPoundCanceled GroundPoundCanceledEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerGroundPoundTargetUpdated GroundPoundTargetUpdatedEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector CurrentGroundPoundGoal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector CurrentGroundPoundGoalUpVector;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasValidGroundPoundGoal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ASQExplosionActor> GroundPoundExplosionClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRotateCameraTowardsGroundPound;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRenderGroundPoundGoal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GroundPoundMaxPitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GroundPoundMinPitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GroundPoundCurrentPitch;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInfoScanStateChanged InfoScanStateChangedDelegate;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AORInfoScanPingActor> InitialInfoScanType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AORInfoScanPingActor> RepeatInfoScanType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInfoScannerActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InitialInfoScanDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RepeatInfoScanDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AORInfoScanPingActor> InitialPingActorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AORInfoScanPingActor> RepeatPingActorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* InitialInfoScanSFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* RepeatInfoScanSFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagRequirements InitialPingTagRequirements;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagRequirements RepeatPingTagRequirements;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InfoScanPingDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InfoScanPingDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTimeSlowHandle TimeSlowHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeSlowEaseIn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeSlowEaseOut;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerCombatStateChanged OnPlayerCombatStateChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInCombat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ForceCombatState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCombatMusicPlaying;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanStartCombatMusic;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UORLastGoodLocationTracker* LastGoodLocationTracker;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMultigunActive;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerZoneChanged OnPlayerZoneChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInGameplayZone;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerJetpackStateChanged OnJetpackStateChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DebugPathFootOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInterface*> CachedPlayerMaterials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TMap<UMaterialInterface*, UPrimitiveComponent*> CachedPlayerMaterialToCompMap;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat MediumDamageThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CalculatedDamageInflictedRTPC;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 JuggleCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 JuggleCountForAchievement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AORAICharacter* LastJuggled;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FGameplayTag> ActiveWeaponMods;
    
    AORPlayerCharacter();
protected:
    UFUNCTION(BlueprintCallable)
    void WorldDilationChanged(float Diff, float NewValue);
    
public:
    UFUNCTION(BlueprintCallable)
    void WeaponModRemoved(const UORGlobalEventPayload* EventData);
    
    UFUNCTION(BlueprintCallable)
    void WeaponModAdded(const UORGlobalEventPayload* EventData);
    
protected:
    UFUNCTION(BlueprintCallable)
    void UpdateCombatState();
    
    UFUNCTION(BlueprintCallable)
    void UpdateCombatMusic();
    
public:
    UFUNCTION(BlueprintCallable)
    void UnregisterOwnedSkelMesh(UMeshComponent* Skelmesh);
    
    UFUNCTION(BlueprintCallable)
    void UnregisterOwnedActor(AActor* Actor);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UndoMaterialAdjustmentNearSurface();
    
protected:
    UFUNCTION(BlueprintCallable)
    void SupportFireDisabledTagChanged(const FGameplayTag Tag, int32 NewCount);
    
    UFUNCTION(BlueprintCallable)
    void SlideImpactOverlap(AActor* OtherActor, int32 VolumeIndex);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetPlayingSyncedAnim(bool bSyncedAnim, TEnumAsByte<ETransformState> OverrideTransformState);
    
    UFUNCTION(BlueprintCallable)
    void SetPlayerRadio(AActor* RadioActor);
    
    UFUNCTION(BlueprintCallable)
    void SetMultigunState(bool bIsMultigunActive);
    
    UFUNCTION(BlueprintCallable)
    void SetMaterialAdjustmentNearSurfaceEnabled(bool bNewEnable, bool bForceUndoMaterialAdjustment);
    
    UFUNCTION(BlueprintCallable)
    void SetKnifeyTalkingState(bool bIsTalking);
    
    UFUNCTION(BlueprintCallable)
    void SetKnifeyShown(bool bIsShown);
    
    UFUNCTION(BlueprintCallable)
    void SetKnifeyExecuting(bool bIsExecuting);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentInteractionStation(AORInteractionStationManager* CurrentStation);
    
    UFUNCTION(BlueprintCallable)
    void SetAllowKnifeyShown(bool bIsAllowed);
    
    UFUNCTION(BlueprintCallable)
    void RegisterOwnedSkelMesh(UMeshComponent* Skelmesh);
    
    UFUNCTION(BlueprintCallable)
    void RegisterOwnedActor(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    void RefreshArmMesh();
    
protected:
    UFUNCTION(BlueprintCallable)
    void PrimaryFireDisabledTagChanged(const FGameplayTag Tag, int32 NewCount);
    
public:
    UFUNCTION(BlueprintCallable)
    void PlayFeedback(const FGameplayTagContainer& FeedbackTags);
    
protected:
    UFUNCTION(BlueprintCallable)
    void PlayerZoneTagChanged(const FGameplayTag Tag, int32 NewCount);
    
public:
    UFUNCTION(BlueprintCallable)
    int32 Play2DCharacterAudio(UAkAudioEvent* AkAudioEvent);
    
    UFUNCTION(BlueprintCallable)
    void PauseStateChanged(bool bPaused);
    
    UFUNCTION(BlueprintCallable)
    void OwnedItemEventFired(ASQInventoryItem* Item, FGameplayTag EventTag, FGameplayTag FireModeTag, TEnumAsByte<EInventoryTransactionType> TransactionType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnViewportFocusLost();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUpgradeProgress(int32 PickupCount, int32 CurrentCount, int32 NeededCount, const FText& PickupName, const FText& UpgradeName);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUpgradeItemExcess(int32 PickupCount, const FText& PickupName);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUpgradeGranted(int32 PickupCount, const FText& PickupName, const FText& UpgradeName);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnSweepAllComplete(TArray<FHitResult>& HitResults);
    
    UFUNCTION(BlueprintCallable)
    void OnLOSTraceAllComplete(TArray<FHitResult>& HitResults);
    
    UFUNCTION(BlueprintCallable)
    void OnJuggle();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnFireBlockedByFriendlyTarget();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnArmRigStateChanged(bool bArmRigActive);
    
    UFUNCTION(BlueprintCallable)
    void OnArmRaiseComplete();
    
    UFUNCTION(BlueprintCallable)
    void OnArmLowerComplete();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void KillChainIncreased(int32 KillChainCount);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void KillChainEnded(int32 KillChainCount);
    
protected:
    UFUNCTION(BlueprintCallable)
    void JetpackDisabledTagChanged(const FGameplayTag Tag, int32 NewCount);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSliding();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayerInSkippableNarrative();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMultigunActive();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInHouse();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInDeepCutMeleeWithActor(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    bool IsInCombat();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsGliding();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDashing();
    
    UFUNCTION(BlueprintCallable)
    void IncForceCombatState();
    
protected:
    UFUNCTION(BlueprintCallable)
    void HandleGroundPoundImpact(const FHitResult& ImpactResult);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void GlideStateChanged(bool bGliding);
    
    UFUNCTION(BlueprintCallable)
    UWidgetInteractionComponent* GetWidgetInteractionComponent();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UMaterialInterface*> GetVisibleCachedMaterials();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UORPlayerTransformManager* GetTransformManager();
    
    UFUNCTION(BlueprintCallable)
    AORFireableInventoryItem* GetPrimaryEquippedItem();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetPlayerRadio();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMouseTurn();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMousePitch();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetKnifeyTalkingState();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetKnifeyShown();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    USkeletalMeshComponent* GetKnifeyMesh();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetKnifeyExecuting();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UMaterialInterface*> GetInvisibleCachedMaterials();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetInfoScannerActive() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetGamepadTurn();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetGamepadPitch();
    
public:
    UFUNCTION(BlueprintCallable)
    AORInteractionStationManager* GetCurrentInteractionStation();
    
    UFUNCTION(BlueprintCallable)
    UAnimInstance* GetAnimInstance();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetAllowKnifeyShown();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ExitWaypointSearchArea();
    
protected:
    UFUNCTION(BlueprintCallable)
    void EvasiveTagChanged(const FGameplayTag Tag, int32 NewCount);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void EnterWaypointSearchArea();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DoMaterialAdjustmentNearSurface();
    
protected:
    UFUNCTION(BlueprintCallable)
    void DelayedCombatMusicStop();
    
public:
    UFUNCTION(BlueprintCallable)
    void DecForceCombatState();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DebugLoadAllItems();
    
    UFUNCTION(BlueprintCallable)
    void DeactivateInfoScanner();
    
    UFUNCTION(BlueprintCallable)
    void DamageInflicted(UObject* Damaged, const FHitResult& HitResult, float Damage, const FGameplayTagContainer& DamageTags, const bool WasKillingBlow);
    
    UFUNCTION(BlueprintCallable)
    void CheckReload();
    
    UFUNCTION(BlueprintCallable)
    bool CheckPlayerFeedbackOnDamage(AORCharacter* Target, const FHitResult& Hit, const FGameplayTagContainer& DamageTags, bool bWasKillingBlow, FGameplayTagContainer& OutFeedbackTags);
    
    UFUNCTION(BlueprintCallable)
    void ChangeCombatState(const bool NewCombatState);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanFireAtCurrentTarget();
    
    UFUNCTION(BlueprintCallable)
    void CancelGroundPound();
    
    UFUNCTION(BlueprintCallable)
    void CachePlayerMaterials();
    
    UFUNCTION(BlueprintCallable)
    void CacheAttachedActorMaterials(AActor* Actor);
    
protected:
    UFUNCTION(BlueprintCallable)
    void ActivateRepeatInfoScanPing();
    
    UFUNCTION(BlueprintCallable)
    void ActivateInitialInfoScanPing();
    
public:
    UFUNCTION(BlueprintCallable)
    void ActivateInfoScanner();
    
    UFUNCTION(BlueprintCallable)
    void ActivateGroundPoundTween();
    
    
    // Fix for true pure virtual functions not being implemented
};

