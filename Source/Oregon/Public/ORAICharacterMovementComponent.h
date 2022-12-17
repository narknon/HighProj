#pragma once
#include "CoreMinimal.h"
#include "ORCharacterMovementComponent.h"
#include "VisualLogger/VisualLoggerDebugSnapshotInterface.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "GameplayTagContainer.h"
#include "OnChargeUpdatedDelegate.h"
#include "OnChargeReachedStopLocationDelegate.h"
#include "OnChargeHitSurfaceDelegate.h"
#include "OnHandleImpactApplyImpactDamageToSelfDelegate.h"
#include "ORAICharacterMovementComponent.generated.h"

class AActor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class OREGON_API UORAICharacterMovementComponent : public UORCharacterMovementComponent, public IVisualLoggerDebugSnapshotInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnHandleImpactApplyImpactDamageToSelf OnApplyImpactDamageToSelf;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowStationaryRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameplayTag> DisallowRotationTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameplayTag> ReallowRotationTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StandingRotationMaxSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StandingRotateMinTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StandingRotateMinAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AnimationRotationRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NavMeshGapRecoveryRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float YawRotationAcceleration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float YawRotationDecceleration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowCharacterToRotate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTickAfterDeath;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PhysWalkingCollisionProfile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName NavWalkingCollisionProfile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NavWalkingSearchRadiusScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool OffNavMeshAutoKillEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OffNavMeshAutoKillTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTimerHandle OffNavMeshAutoKillTimerHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFallingAutoKillEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FallingAutoKillTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTimerHandle FallingAutoKillTimerHandle;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTimerHandle NavWalkingCooldownTimerHandle;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnChargeHitSurface OnChargeHitSurface;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnChargeReachedStopLocation OnChargeReachedStopLocation;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnChargeUpdated OnChargeUpdated;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* ChargeTargetActor;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RequestedChargeSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RequestedChargeRotationRate;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector ChargeStopLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bProbeAheadOfCharge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ChargeProbeDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ChargeProbeRadiusScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUse3DDistanceCheck;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTimerHandle StartFallingKnockupTimerHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StartFallingKnockupTime;
    
public:
    UORAICharacterMovementComponent();
    UFUNCTION(BlueprintCallable)
    void UpdateChargeTargetLocation(const FVector& InChargeTargetLocation);
    
    UFUNCTION(BlueprintCallable)
    void UpdateChargeSpeed(float Speed);
    
    UFUNCTION(BlueprintCallable)
    void StopCharacterCharge();
    
protected:
    UFUNCTION(BlueprintCallable)
    void StartFallingKnockup();
    
public:
    UFUNCTION(BlueprintCallable)
    void StartCharacterChargeRushStraightForward(float ChargeSpeed, bool MaintainVelocity);
    
    UFUNCTION(BlueprintCallable)
    void StartCharacterChargeRushAtLocation(const FVector& Location, float ChargeSpeed, bool MaintainVelocity, float ChargeRotationRate);
    
    UFUNCTION(BlueprintCallable)
    void StartCharacterChargeRushAtActor(AActor* TargetActor, float ChargeSpeed, bool MaintainVelocity, float ChargeRotationRate);
    
    UFUNCTION(BlueprintCallable)
    void StartCharacterChargeActor(AActor* TargetActor, float ChargeSpeed, float ProximityRadiusStop, bool MaintainVelocity);
    
    UFUNCTION(BlueprintCallable)
    void StartCharacterCharge(FVector Direction, float ChargeSpeed, float ChargeDistance, float ProximityRadiusStop, bool MaintainVelocity);
    
    UFUNCTION(BlueprintCallable)
    void SetSyncedAnimationRotation(const FRotator& Rotation, float DeadlineSeconds);
    
    UFUNCTION(BlueprintCallable)
    void SetOffNavMeshAutoKillEnabled(const bool Enabled);
    
    UFUNCTION(BlueprintCallable)
    void SetHasEverFoundNavMesh(const bool bHasFound);
    
    UFUNCTION(BlueprintCallable)
    void SetFallingAutoKillEnabled(const bool Enabled);
    
protected:
    UFUNCTION(BlueprintCallable)
    void KillOwningCharacter();
    
public:
    UFUNCTION(BlueprintCallable)
    bool IsPointReachable(const FVector& Location);
    
    UFUNCTION(BlueprintCallable)
    bool IsCharacterCharging();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAirbornOrPendingLaunch() const;
    
    UFUNCTION(BlueprintCallable)
    void EndNavWalkingCooldown();
    
    UFUNCTION(BlueprintCallable)
    void ClearSyncedAnimationRotation();
    
    UFUNCTION(BlueprintCallable)
    void BeginNavWalkingCooldown(const float CooldownTime, bool bSetMovementWalking);
    
    
    // Fix for true pure virtual functions not being implemented
};

