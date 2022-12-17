#pragma once
#include "CoreMinimal.h"
#include "WaypointList.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FWaypointList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> WaypointList;
    
    OREGON_API FWaypointList();
};

