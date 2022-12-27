#pragma once
#include "CoreMinimal.h"
#include "LookAtSettings.h"
#include "LookAtStruct.h"
#include "EmotionInterface.h"
#include "Animation/AnimInstance.h"
#include "TalkingInterface.h"
#include "LookAtInterface.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "OR3PAnimInstanceEyeLookAtData.h"
#include "Engine/EngineTypes.h"
#include "GameplayTagContainer.h"
#include "EEmotionState.h"
#include "EOregonCustomMovement.h"
#include "OnLeftArmActionStateChangedDelegate.h"
#include "OnTetherAnimationCompleteDelegate.h"
#include "EmotionStruct.h"
#include "OR1PAnimInstance.generated.h"

class AORPlayerCharacter;
class UAnimSequence;

UCLASS(Blueprintable, NonTransient)
class OREGON_API UOR1PAnimInstance : public UAnimInstance/*, public ILookAtInterface, public IEmotionInterface, public ITalkingInterface*/ {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CombatStateTransitionBlendTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldTransitionCombatState;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString CharacterName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLookAtStruct LookAtData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEmotionStruct EmotionData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EEmotionState DefaultEmotion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EEmotionState CurrentEmotion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsEmotionOverridden;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsKnifeyIdling;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsTalking;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsTransitioning;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsReloading;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsTalkingNotReloading;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EmotionBlendAlpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasLookAtLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* HappyPoseAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* SarcasticPoseAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* ExcitedPoseAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* WickedPoseAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* NeutralPoseAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* ConfusedPoseAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* DeterminedPoseAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* SurprisedPoseAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* SadPoseAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* AngryPoseAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* AfraidPoseAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* DisgustedPoseAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* ExhaustedPoseAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsHeadBoneUp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bHasLookAtTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bHasEyeLookAtTarget;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector LookAtTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName HeadBoneName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLookAtSettings TorsoLookAtSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float TorsoAimOffsetX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float TorsoAimOffsetY;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool HideFaceAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool DisableLipsync;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool DisableEyeAutomation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FOR3PAnimInstanceEyeLookAtData> EyeLookAtSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FRotator Eye1Rotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FRotator Eye2Rotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float Eye1RotationAlpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float Eye2RotationAlpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool Eye1UsesWorldSpace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool Eye2UsesWorldSpace;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLeftArmActionStateChanged OnLeftArmActionStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLeftArmActionStateChanged OnLeftArmActionCompleted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTetherAnimationComplete OnTetherAnimationComplete;
    
    UOR1PAnimInstance();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void TryShowKnifey();
    
    UFUNCTION(BlueprintCallable)
    void TetherEventTriggered(FGameplayTag Event);
    
    UFUNCTION(BlueprintCallable)
    void TetherAnimationComplete();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldTransitionCombatState();
    
public:
    UFUNCTION(BlueprintCallable)
    void SetDisableEyeAutomation(bool bDisable);
    
    UFUNCTION(BlueprintCallable)
    void PlayerPossessionChanged(bool bPossessed);
    
protected:
    UFUNCTION(BlueprintCallable)
    void PlayerJumped(int32 JumpCount);
    
    UFUNCTION(BlueprintCallable)
    void PlayerGroundPoundImpacted(FVector Location);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStoppedTalking();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStartedTalking();
    
    UFUNCTION(BlueprintCallable)
    void MeleeEventTriggered(FGameplayTag Event);
    
    UFUNCTION(BlueprintCallable)
    void LedgeGrabTriggered(float GrabHeight);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_PlayerJumped(int32 JumpCount);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_CombatStateChanged(bool bInCombat);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsZiplining();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTetherPulling();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTethering();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSprinting();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSliding();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLeftArmActionActive();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInGroundPound();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInCombatState();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInAir();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsHovering();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsGliding();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDefaultEmotionOverridden();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDashing();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCrouched();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsClamped();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsADSOn();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HideKnifeyImmediately();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HideKnifey();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector2D GetViewRelativeVelocity();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AORPlayerCharacter* GetOwningCharacter();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetOwnerSpeed2D();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetOwnerSpeed();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TEnumAsByte<EMovementMode> GetMovementMode();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAnimSequence* GetEmotionPose(EEmotionState Emotion);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EEmotionState GetDefaultEmotion();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TEnumAsByte<EOregonCustomMovement> GetCustomMovementMode();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EEmotionState GetCurrentEmotion();
    
public:
    UFUNCTION(BlueprintCallable)
    void EndLeftArmAction();
    
protected:
    UFUNCTION(BlueprintCallable)
    void EndCombatStateTransition();
    
    UFUNCTION(BlueprintCallable)
    void CombatStateChanged(bool bInCombat);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_TetherEventTriggered(FGameplayTag Event);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_PlayerUnpossessed();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_PlayerPossessed();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_PlayerGroundPoundImpacted();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_MeleeEventTriggered(FGameplayTag Event);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_LedgeGrabTriggered(float GrabHeight);
    
public:
    UFUNCTION(BlueprintCallable)
    void ActivateLeftArmAction();
    
    
    // Fix for true pure virtual functions not being implemented
};

