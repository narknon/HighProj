#pragma once
#include "CoreMinimal.h"
#include "ORActivityBase.h"
#include "AITypes.h"
#include "Navigation/PathFollowingComponent.h"
#include "ORPatrolActivity.generated.h"

class AORPatrolRoute;

UCLASS(Blueprintable, EditInlineNew)
class OREGON_API UORPatrolActivity : public UORActivityBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AORPatrolRoute* PatrolRoute;
    
    UORPatrolActivity();
protected:
    UFUNCTION(BlueprintCallable)
    void OnWaypointMoveCompleted(FAIRequestID RequestID, TEnumAsByte<EPathFollowingResult::Type> MovementResult);
    
    UFUNCTION(BlueprintCallable)
    void MoveToNextWaypoint();
    
};

