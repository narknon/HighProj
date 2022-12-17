#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "WaypointList.h"
#include "WaypointResult.h"
#include "GameplayTagContainer.h"
#include "ORMissionWaypointSubsystem.generated.h"

class AActor;
class AORMissionWaypoint;
class UORPlayerCompassMarkerComponent;

UCLASS(Blueprintable)
class OREGON_API UORMissionWaypointSubsystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FWaypointList> Waypoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, AActor*> WaypointOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<AORMissionWaypoint*> LastActiveWaypoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TSet<UORPlayerCompassMarkerComponent*> LastActiveCompassMarkers;
    
public:
    UORMissionWaypointSubsystem();
    UFUNCTION(BlueprintCallable)
    void SetOverrideWaypoint(const FGameplayTag& ObjectiveId, AActor* Location);
    
    UFUNCTION(BlueprintCallable)
    TArray<FWaypointResult> GetAllWaypoints();
    
    UFUNCTION(BlueprintCallable)
    TArray<FWaypointResult> GetActiveWaypoints();
    
};

