#pragma once
#include "CoreMinimal.h"
#include "ORPatrolWaypoint.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FORPatrolWaypoint {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* WaypointMarker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DesiredPauseOnArrival;
    
    OREGON_API FORPatrolWaypoint();
};

