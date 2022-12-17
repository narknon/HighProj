#pragma once
#include "CoreMinimal.h"
#include "GameFramework/MovementComponent.h"
#include "ORGarmFlightControllerMove.h"
#include "ORGarmFlightControllerMoveCompleteDelegate.h"
#include "ORGarmFlightController.generated.h"

class AActor;
class UAkAudioEvent;
class UMercuna3DMovementComponent;
class AORTriggerVolume;
class UORAIFlyingCharacterMovementComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class OREGON_API UORGarmFlightController : public UMovementComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AORTriggerVolume* AreaVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMercuna3DMovementComponent* MercunaMoveComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UORAIFlyingCharacterMovementComponent* CharacterMovementComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float MoveStartTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BaseAcceleration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BaseDeceleration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BaseMaxSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BaseSpinSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RotationBaseAcceleration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RotationBaseDeceleration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RotationMaxSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GoalRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaximumPitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AccelerationToPitchFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WindResistanceFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WobbleAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WobbleDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* MoveStartSFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* MoveStopSFX;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FORGarmFlightControllerMoveComplete OnMoveComplete;
    
    UORGarmFlightController();
    UFUNCTION(BlueprintCallable)
    void VerticalMove(float Height, const FORGarmFlightControllerMove& InMoveData);
    
    UFUNCTION(BlueprintCallable)
    void TriggerWobble();
    
    UFUNCTION(BlueprintCallable)
    void StrafeMove(float Height, float MinDistancePastPlayer, float MaxDistancePastPlayer, const FORGarmFlightControllerMove& InMoveData);
    
    UFUNCTION(BlueprintCallable)
    void RotationalMove(float MinAngle, float MaxAngle, float MinDistance, float MaxDistance, float MinHeight, float MaxHeight, float ExtraRadius, float ExtraHeight, const FORGarmFlightControllerMove& InMoveData);
    
    UFUNCTION(BlueprintCallable)
    void MoveToActor(AActor* Destination, const FORGarmFlightControllerMove& InMoveData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMoveActive() const;
    
    UFUNCTION(BlueprintCallable)
    void DebugMove(const FORGarmFlightControllerMove& InMoveData);
    
};

