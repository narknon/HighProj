#pragma once
#include "CoreMinimal.h"
#include "ORAIController.h"
#include "ORAITurretController.generated.h"

UCLASS(Blueprintable)
class OREGON_API AORAITurretController : public AORAIController {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TargetActorBlackboardKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TrackingBlackboardKey;
    
public:
    AORAITurretController();
};

