#pragma once
#include "CoreMinimal.h"
#include "ORActivityBase.h"
#include "AITypes.h"
#include "Navigation/PathFollowingComponent.h"
#include "ORRoamActivity.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class OREGON_API UORRoamActivity : public UORActivityBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RoamSearchRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RoamDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RoamDurationDeviation;
    
    UORRoamActivity();
protected:
    UFUNCTION(BlueprintCallable)
    bool RoamToNextWaypoint();
    
    UFUNCTION(BlueprintCallable)
    void OnWaypointMoveCompleted(FAIRequestID RequestID, TEnumAsByte<EPathFollowingResult::Type> MovementResult);
    
};

