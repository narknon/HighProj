#pragma once
#include "CoreMinimal.h"
#include "ORAIFlyingCharacterMovementComponent.h"
#include "ORGarmantuousPart2MovementComponent_OnChargeCompleteDelegate.h"
#include "ORGarmantuousPart2MovementComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class OREGON_API UORGarmantuousPart2MovementComponent : public UORAIFlyingCharacterMovementComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ChargeSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ChargeLocationOffsetDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ChargeDistanceGoalRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ChargeDeceleration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HighFrictionDeceleration;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FORGarmantuousPart2MovementComponent_OnChargeComplete OnChargeComplete;
    
    UORGarmantuousPart2MovementComponent();
};

