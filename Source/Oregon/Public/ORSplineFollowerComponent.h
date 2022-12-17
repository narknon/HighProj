#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "UObject/NoExportTypes.h"
#include "ORSplineFollowerEventDelegate.h"
#include "ORSplineFollowerComponent.generated.h"

class AActor;
class USplineComponent;
class UCurveFloat;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class OREGON_API UORSplineFollowerComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FORSplineFollowerEvent OnSplineEndReached;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* SplineActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMoveAtStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLoopMovement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bReverseAtEnd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMatchSplineRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Duration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StartOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EndDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* TimelineCurve;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USplineComponent* SplineTrackToFollow;
    
public:
    UORSplineFollowerComponent();
    UFUNCTION(BlueprintCallable)
    void ToggleMovementDirection();
    
private:
    UFUNCTION(BlueprintCallable)
    void TimelineFloatReturn(float Val);
    
    UFUNCTION(BlueprintCallable)
    void TimelineFinished();
    
public:
    UFUNCTION(BlueprintCallable)
    void StopMovementAlongSpline();
    
    UFUNCTION(BlueprintCallable)
    void StartMovementAlongSpline(bool bResetPosition);
    
    UFUNCTION(BlueprintCallable)
    void SetSplineTrack(USplineComponent* SplineToFollow);
    
    UFUNCTION(BlueprintCallable)
    void SetPositionAlongSpline(float OffsetFromStartPosition);
    
    UFUNCTION(BlueprintCallable)
    void SetMovementDirection(bool bReverse);
    
    UFUNCTION(BlueprintCallable)
    void ResetSpeedToDefault();
    
    UFUNCTION(BlueprintCallable)
    void ModifySpeed(float SpeedMultiplier);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSplineMovementActive();
    
    UFUNCTION(BlueprintCallable)
    void InitNewSplineActor(AActor* NewSplineActor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USplineComponent* GetSplineTrack();
    
    UFUNCTION(BlueprintCallable)
    float GetPercentageTraversed();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetDirectionAtCurrentSplinePosition();
    
};

