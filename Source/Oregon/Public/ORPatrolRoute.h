#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "UObject/NoExportTypes.h"
#include "ORPatrolWaypoint.h"
#include "ORPatrolRoute.generated.h"

UCLASS(Blueprintable)
class OREGON_API AORPatrolRoute : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FORPatrolWaypoint> Waypoints;
    
    AORPatrolRoute();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 NumWaypoints() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasMinValidWaypoints(int32 MinWaypoints) const;
    
    UFUNCTION(BlueprintCallable)
    bool GetNextIncrementingWaypointIndexAndWaypointData(const int32 CurrentWaypointIndex, int32& NextWaypointIndex, FORPatrolWaypoint& NextWaypointDataCopy);
    
    UFUNCTION(BlueprintCallable)
    bool GetNextIncrementingWaypointIndexAndLocation(const int32 CurrentWaypointIndex, int32& NextWaypointIndex, FVector& NextWaypointLocation);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNextIncrementingWaypointIndex(int32 CurrentWaypointIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetLocationForWaypointIndex(int32 WaypointIndex, FVector& WaypointLocation) const;
    
};

