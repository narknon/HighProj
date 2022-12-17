#pragma once
#include "CoreMinimal.h"
#include "ORActivityBase.h"
#include "AITypes.h"
#include "Navigation/PathFollowingComponent.h"
#include "ORWaypointActivity.generated.h"

class AActor;

UCLASS(Blueprintable, EditInlineNew)
class OREGON_API UORWaypointActivity : public UORActivityBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* Waypoint;
    
    UORWaypointActivity();
protected:
    UFUNCTION(BlueprintCallable)
    void OnWaypointMoveCompleted(FAIRequestID RequestID, TEnumAsByte<EPathFollowingResult::Type> MovementResult);
    
    UFUNCTION(BlueprintCallable)
    bool MoveToWaypoint();
    
};

