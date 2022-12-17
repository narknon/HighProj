#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Engine/EngineTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "ETweenType.h"
#include "OnTweenCompleteDelegate.h"
#include "OnTweenMoveUpdateDelegate.h"
#include "OROnSplineMoveCompleteDelegate.h"
#include "OnMagwallChangedDelegate.h"
#include "Chaos/ChaosEngineInterface.h"
#include "ORCharacterMovementComponent.generated.h"

class AActor;
class UGameplayEffect;
class USplineComponent;
class UORInteractableComponent_SplineAnchor;
class UCurveFloat;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class OREGON_API UORCharacterMovementComponent : public UCharacterMovementComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ImpactDamageMinSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayEffect> ImpactGameplayEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayEffect> ImpactImmunityGameplayEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsSprinting;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ETweenType> TweenType;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTweenMoveUpdate OnTweenMoveUpdate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTweenComplete OnTweenCompleteEvent;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector TweenStartLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector TweenGoalLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TweenGoalSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TweenGoalRotationMod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TweenCurrentTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TweenGoalTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator TweenStartRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator TweenGoalRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsEndingTween;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEndTweenOnCollision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTweenCollisionOff;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHitResult CachedTweenImpact;
    
    UPROPERTY(EditAnywhere, Transient)
    TWeakObjectPtr<AActor> ActorTweenGoal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector ActorTweenGoalLocalOffset;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseTweenRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bZiplineNegativeTravel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinZiplineTravelDistance;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMagwallChanged MagwallChangedEvent;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GroundFrictionMagwall;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MagWallStrafeThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoDismountAtMagwallEnd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector MagwallLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* LookVectorSpeedAdjustmentCurve;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOROnSplineMoveComplete OnSplineMoveComplete;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SplineMovePercent;
    
public:
    UPROPERTY(EditAnywhere, Export)
    TWeakObjectPtr<USplineComponent> CurrentMovementSpline;
    
    UPROPERTY(EditAnywhere, Export)
    TWeakObjectPtr<UORInteractableComponent_SplineAnchor> CurrentSplineAnchor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector CurrentSplineLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrentMovementSplineDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector CurrentMovementSplineOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ZiplineRollOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ZiplineRollSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ZiplineSubstepTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ZiplineRollGravity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ZiplineRollLateralAccelFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ZiplineRollFriction;
    
    UORCharacterMovementComponent();
    UFUNCTION(BlueprintCallable)
    void ToggleSprint(bool bNewSprint);
    
    UFUNCTION(BlueprintCallable)
    void StartSplineMove(USplineComponent* SplineComponent, float StartDistance, const float SplineMoveSpeed, const bool ReverseSplineDirection, const bool ForceSplineRotation, const bool ProjectSplineToMesh);
    
    UFUNCTION(BlueprintCallable)
    void StartLinearTween(FVector GoalLocation, float TweenSpeed, FRotator GoalRotation, bool EndTweenOnCollision, bool bTurnOffActorCollision, bool bUseForcedRotation, float RotationSpeedMod);
    
    UFUNCTION(BlueprintCallable)
    void SetWalkableSurfaceOverrideOnTimer(TEnumAsByte<EPhysicalSurface> SurfaceOverride, float Duration);
    
    UFUNCTION(BlueprintCallable)
    void SetWalkableSurfaceOverride(TEnumAsByte<EPhysicalSurface> SurfaceOverride);
    
    UFUNCTION(BlueprintCallable)
    void RemoveWalkableSurfaceOverride();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTweening();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSprinting() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSplineMoving();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInZipline();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInMagWall();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInAnchorPull();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TEnumAsByte<EPhysicalSurface> GetWalkableSurfaceType();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTag GetTagForCurrentMovement();
    
    UFUNCTION(BlueprintCallable)
    void EndTween();
    
    UFUNCTION(BlueprintCallable)
    void EndSplineMove();
    
};

