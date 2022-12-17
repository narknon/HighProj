#pragma once
#include "CoreMinimal.h"
#include "Curves/CurveFloat.h"
#include "Components/ActorComponent.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "ETransformState.h"
#include "SyncedAnimationComponentEventDelegate.h"
#include "SyncedPlayerAnimationComponent.generated.h"

class USkinnedMeshComponent;
class USkeletalMeshComponent;
class UAnimSequence;
class UAnimMontage;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class OREGON_API USyncedPlayerAnimationComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSyncedAnimationComponentEvent OnSyncedAnimStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSyncedAnimationComponentEvent OnSyncedAnimComplete;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSyncedAnimationComponentEvent OnSyncedAnimInterrupted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PlayerAttachSocket;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bArmsFollowCamera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bForcePlayOnArmRig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLowerGunAtStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRaiseGunAtEnd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisableGravityDuringAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisableCollisionDuringAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EnableInputOffsetFromEnd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ETransformState> OverrideTransformState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* PlayerAnimMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* ActorAnimMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* ActorAnimSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAnimateWhileLerping;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHideArmsWhileLerping;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlayerLerpTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseLerpCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRuntimeFloatCurve PlayerLerpCurve;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* CachedOwnerSkelMesh;
    
    UPROPERTY(EditAnywhere, Export)
    TWeakObjectPtr<USkinnedMeshComponent> CachedRightArmMasterPoseComp;
    
    UPROPERTY(EditAnywhere, Export)
    TWeakObjectPtr<USkinnedMeshComponent> CachedLeftArmMasterPoseComp;
    
public:
    USyncedPlayerAnimationComponent();
    UFUNCTION(BlueprintCallable)
    void StartSyncedAnimation(USkeletalMeshComponent* OwnerSkelMesh, FTransform OptionalLerpTransform);
    
    UFUNCTION(BlueprintCallable)
    void OnMontageEnded(UAnimMontage* Montage, bool bInterrupted);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAnimationPlaying();
    
    UFUNCTION(BlueprintCallable)
    void EquippedItemChanged(FGameplayTag ItemTag);
    
    UFUNCTION(BlueprintCallable)
    void EndSyncedAnimation();
    
    UFUNCTION(BlueprintCallable)
    void EnablePlayerInput();
    
    UFUNCTION(BlueprintCallable)
    void BeginPlayingAnimations();
    
};

