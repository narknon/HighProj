#pragma once
#include "CoreMinimal.h"
#include "ORAICharacter.h"
#include "Engine/EngineTypes.h"
#include "CrowdNPCPlayerInteractableStateChangeDelegateDelegate.h"
#include "CrowdNPCEndedPlayerInteractionDelegateDelegate.h"
#include "CrowdNPCStartedPlayerInteractionDelegateDelegate.h"
#include "ORNPCCharacter.generated.h"

class AActor;
class UAkSwitchValue;
class UMeshComponent;
class UORActivityProfileComponent;
class UORActionAnimationComponent;
class UORDetachedTriggerComponent;
class UAnimSequence;
class UAnimMontage;

UCLASS(Blueprintable)
class AORNPCCharacter : public AORAICharacter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UORActionAnimationComponent* ActionAnimationComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UORActivityProfileComponent* ActivityProfileComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowIdleFidgets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAnimMontage*> IdleFidgets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* BaseIdle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldCycleIdles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float IdleCycleWaitTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ForwardBumpAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BackwardBumpAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName LeftBumpAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName RightBumpAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBumpReactsEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bJustBumped;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ForwardHitAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BackwardHitAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName LeftHitAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName RightHitAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHitReactsEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanDie;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRagdollOnDeath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDismemberOnDeath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInterruptSpeakerOnDeath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* DeathMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAkSwitchValue*> VoiceGroups;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UORDetachedTriggerComponent* DetachedTriggerVolumeComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsPlayerInteractable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldStopActivityProfileOnInteract;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldResumeActivityProfileOnInteractEnd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasCustomInteractionActions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxInteractRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldNoticePlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRandomizePlayerNotice;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxNoticeRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinNoticeDot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxNoticeCooldownDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxNoticeTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bNoticedPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasDied;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinActivityInterruptTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxActivityInterruptTime;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCrowdNPCStartedPlayerInteractionDelegate OnPlayerInteractionStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCrowdNPCEndedPlayerInteractionDelegate OnPlayerInteractionEnded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCrowdNPCPlayerInteractableStateChangeDelegate OnPlayerInteractableStateChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* ExplicitInteractionTarget;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UMeshComponent*> ActorMeshComps;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle MoveTimerHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle PostBumpTimerHandle;
    
public:
    AORNPCCharacter();
    UFUNCTION(BlueprintCallable)
    void StopNoticingPlayer();
    
    UFUNCTION(BlueprintCallable)
    void StartNoticingPlayer();
    
    UFUNCTION(BlueprintCallable)
    void SetExplicitInteractionTarget(AActor* Actor, bool bForce);
    
    UFUNCTION(BlueprintCallable)
    void SetDisableEyeAutomation(bool bDisable);
    
    UFUNCTION(BlueprintCallable)
    void SetBaseIdleOverride();
    
    UFUNCTION(BlueprintCallable)
    void ScaleMovementSpeed(float MovementScale);
    
    UFUNCTION(BlueprintCallable)
    void PlayerBumpInto(AActor* OtherActor, int32 VolumeIndex);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnTimerFinished();
    
    UFUNCTION(BlueprintCallable)
    void OnPostBumpTimerFinished();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnNPCAfterHit();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnNPCAfterBump();
    
    UFUNCTION(BlueprintCallable)
    void MarkAsDead(bool bDead);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInPlayerInteraction() const;
    
    UFUNCTION(BlueprintCallable)
    void ForceEndInteraction(float InteractionCooldown, bool bDisableFutureInteractions);
    
    UFUNCTION(BlueprintCallable)
    void ClearExplicitInteractionTarget(bool bForce);
    
    UFUNCTION(BlueprintCallable)
    void ClearBaseIdleOverride();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CanStartPlayerInteraction(AActor* PlayerActor);
    
};

