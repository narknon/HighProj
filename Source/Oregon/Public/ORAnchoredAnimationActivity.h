#pragma once
#include "CoreMinimal.h"
#include "ORActivityBase.h"
#include "AITypes.h"
#include "Navigation/PathFollowingComponent.h"
#include "ORAnchoredAnimationActivity.generated.h"

class AActor;

UCLASS(Blueprintable, EditInlineNew)
class OREGON_API UORAnchoredAnimationActivity : public UORActivityBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* OverrideAnchorActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AnimationEnterAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AnimationExitAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BoneName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PreAnimationRotateSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PreLerpAnimationDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AnimationAnchorLerpSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AnimationHoldTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PostLerpDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bNegatePreAnimationFacingRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSkipAnimationAnchorLerp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSkipPathing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFindNearestAnchor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bConstrainToGroundPlane;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRetryOnFailedPathing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MoveToAcceptanceRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRandomRoamAway;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* AnchorActor;
    
public:
    UORAnchoredAnimationActivity();
protected:
    UFUNCTION(BlueprintCallable)
    void UpdateAnchoredAnimationRotation();
    
    UFUNCTION(BlueprintCallable)
    void UpdateAnchoredAnimationLocation();
    
    UFUNCTION(BlueprintCallable)
    void StartAnchoredAnimation();
    
    UFUNCTION(BlueprintCallable)
    void OnAnimOffsetMoveCompleted(FAIRequestID RequestID, TEnumAsByte<EPathFollowingResult::Type> MovementResult);
    
    UFUNCTION(BlueprintCallable)
    void OnAnchorDestroyed(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    void MoveToAnimOffset();
    
    UFUNCTION(BlueprintCallable)
    void FinishedAnchoredAnimation();
    
};

