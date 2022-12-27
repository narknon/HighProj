#pragma once
#include "CoreMinimal.h"
#include "LookAtSettings.h"
#include "LookAtStruct.h"
#include "LipFlapStruct.h"
#include "EmotionInterface.h"
#include "Animation/AnimInstance.h"
#include "TalkingInterface.h"
#include "LookAtInterface.h"
#include "DisableEyeAutomationInterface.h"
#include "IdleOverrideInterface.h"
#include "LipFlapInterface.h"
#include "Engine/EngineTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "OR3PAnimInstanceEyeLookAtData.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "EInventoryTransactionType.h"
#include "EEmotionState.h"
#include "EORDirection2D.h"
#include "EORHitReactionType.h"
#include "EmotionStruct.h"
#include "ORAttentionComponent.h"
#include "ORCharacter.h"
#include "SQInventoryItem.h"
#include "STPossessableComponent.h"
#include "OR3PAnimInstance.generated.h"



UCLASS(Blueprintable, NonTransient)
class UOR3PAnimInstance : public UAnimInstance/*, public ILookAtInterface, public IEmotionInterface, public ITalkingInterface, public ILipFlapInterface, public IIdleOverrideInterface, public IDisableEyeAutomationInterface*/ {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AimUpdateSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float CurrentPitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float CurrentYaw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float CurrentPitchSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float CurrentYawSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PitchAcceleration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PitchDeceleration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float YawAcceleration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float YawDeceleration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float YawClamp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PitchClamp;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float OverridePitchClamp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float OverrideYawClamp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float IdleOverrideStartOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString CharacterName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHeadBonePointsUp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAnimSequence* IdleOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bHasIdleOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float IdleRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bSighted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsTalking;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsTransitioning;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEmotionStruct EmotionData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EEmotionState DefaultEmotion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EEmotionState CurrentEmotion;
    
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
    bool bIsEmotionOverridden;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsEmotionAllowed;
    
    /*UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FLookAtStruct LookAtData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FLookAtStruct EyeLookAtData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FLipFlapStruct LipFlapData;*/
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bHasLookAtTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bHasEyeLookAtTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bDisableEyeAutomation;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector LookAtTarget;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector EyeLookAtTarget;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector BigEyeModeScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName HeadBoneName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TorsoBoneName;
    
    /*UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLookAtSettings TorsoLookAtSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLookAtSettings HeadLookAtSettings;*/
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableTorsoLook;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float TorsoAimOffsetX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float TorsoAimOffsetY;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float HeadAimOffsetX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float HeadAimOffsetY;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FOR3PAnimInstanceEyeLookAtData> EyeLookAtSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FRotator Eye1Rotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FRotator Eye2Rotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FRotator Eye3Rotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FRotator Eye4Rotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FRotator Eye5Rotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FRotator Eye6Rotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float Eye1RotationAlpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float Eye2RotationAlpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float Eye3RotationAlpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float Eye4RotationAlpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float Eye5RotationAlpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float Eye6RotationAlpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsRagdolling;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bRagdollMeshHasStoppedMoving;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool HideFaceAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool DisableLipsync;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsInActiveSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAnimMontage* CurrentFlinchMontage;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector EvadeDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float LookAtFacingDirectionPCT;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector RightFootEffectorLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector LeftFootEffectorLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector RightJointTargetLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector LeftJointTargetLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator RightFootRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator LeftFootRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector RightHandEffectorLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector LeftHandEffectorLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector RightHandJointTargetLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector LeftHandJointTargetLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator RightHandRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator LeftHandRotation;
    
protected:
    UPROPERTY(EditAnywhere, Export, Transient)
    TWeakObjectPtr<USTPossessableComponent> CachedPossessableComp;
    
    UPROPERTY(EditAnywhere, Export, Transient)
    TWeakObjectPtr<UORAttentionComponent> CachedAttentionComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float TotalSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float ForwardSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float SideSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float VerticalSpeed;
    
public:
    UOR3PAnimInstance();
    UFUNCTION(BlueprintCallable)
    void SetIdleOverride(UAnimSequence* InIdleAnimation);
    
    UFUNCTION(BlueprintCallable)
    void SetDisableEyeAutomation(bool bDisable);
    
    UFUNCTION(BlueprintCallable)
    void SelectAndPlayGetupMontage();
    
    UFUNCTION(BlueprintCallable)
    void RagdollMeshHasStopped();
    
    UFUNCTION(BlueprintCallable)
    void RagdollEnd(bool bPlayGetupAnimation);
    
    UFUNCTION(BlueprintCallable)
    void RagdollBegin();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAnimMontage* PickRandomMontageForHitResultDirection2D(const FHitResult& HitResult, const TArray<UAnimMontage*>& FrontMontages, const TArray<UAnimMontage*>& RightMontages, const TArray<UAnimMontage*>& BackMontages, const TArray<UAnimMontage*>& LeftMontages, const TArray<UAnimMontage*>& Fallbacks) const;
    
    UFUNCTION(BlueprintCallable)
    void OwnerSpawnedFromPool(AORCharacter* Character);
    
    UFUNCTION(BlueprintCallable)
    void OwnerItemEventFired(ASQInventoryItem* Item, FGameplayTag EventTag, FGameplayTag FireModeTag, EInventoryTransactionType TransactionType);
    
    UFUNCTION(BlueprintCallable)
    void OwnerDiedEventFired(UObject* Killer, AORCharacter* Killed, const FHitResult& HitResult, const FGameplayTagContainer& DamageTags);
    
    UFUNCTION(BlueprintCallable)
    void OwnerDamageTakenEventFired(UObject* Damager, AORCharacter* Damaged, const FHitResult& HitResult, float Damage, const FGameplayTagContainer& DamageTags);
    
    UFUNCTION(BlueprintCallable)
    void OwnerDamageAttemptedEventFired(UObject* Damager, AORCharacter* Damaged, const FHitResult& HitResult, float Damage, const FGameplayTagContainer& DamageTags);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStoppedTalking();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStartedTalking();
    
    UFUNCTION(BlueprintCallable)
    void OnGameplayTagsChanged(const FGameplayTag Tag, int32 Count);
    
    UFUNCTION(BlueprintCallable)
    void OnExitedSequence();
    
    UFUNCTION(BlueprintCallable)
    void OnEnteredSequence();
    
public:
    UFUNCTION(BlueprintCallable)
    void LargestHitReactionTypeInTagContainer(const FGameplayTagContainer& InTagContainer, EORHitReactionType& HitReactionType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_SelectAndPlayGetupMontage();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_OwnerSpawnedFromPool();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_OwnerItemEventFired(ASQInventoryItem* Item, FGameplayTag EventTag, FGameplayTag FireModeTag, EInventoryTransactionType TransactionType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_OwnerDiedEventFired(UObject* Killer, const FHitResult& HitResult, const FGameplayTagContainer& DamageTags);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_OwnerDamageTakenEventFired(UObject* Damager, const FHitResult& HitResult, float Damage, const FGameplayTagContainer& DamageTags);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_OwnerDamageAttemptedEventFired(UObject* Damager, const FHitResult& HitResult, float Damage, const FGameplayTagContainer& DamageTags);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_GameplayTagChanged(const FGameplayTag Tag, const bool bAdded);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSighted() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInAir() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDefaultEmotionOverridden() const;
    
    UFUNCTION(BlueprintCallable)
    void HandleFlinchCompleted();
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void GetVelocityComponentsWithSplitLocalSpaceVelocity(UPARAM(Ref) FVector& OutWorldSpaceVelocity, UPARAM(Ref) FVector& OutLocalSpaceVelocity, UPARAM(Ref) float& OutVelocityMagnitude, UPARAM(Ref) float& OutForwardSpeed, UPARAM(Ref) float& OutSideSpeed, UPARAM(Ref) float& OutVerticalSpeed) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void GetVelocityComponents(UPARAM(Ref) FVector& WorldSpaceVelocity, UPARAM(Ref) FVector& LocalSpaceVelocity, UPARAM(Ref) float& VelocityMagnitude) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSpeed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EORDirection2D GetRelativeHitDirection2D(const FHitResult& HitResult) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AORCharacter* GetOwningCharacter() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAnimSequence* GetEmotionPose(EEmotionState Emotion) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EEmotionState GetDefaultEmotion() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EEmotionState GetCurrentEmotion() const;
    
    UFUNCTION(BlueprintCallable)
    void GameplayTagChanged(const FGameplayTag Tag, const bool bAdded);
    
    UFUNCTION(BlueprintCallable)
    void CommitFlinchAnimation(UAnimMontage* Montage);
    
    UFUNCTION(BlueprintCallable)
    void ClearIdleOverride();
    
    
    // Fix for true pure virtual functions not being implemented
};

