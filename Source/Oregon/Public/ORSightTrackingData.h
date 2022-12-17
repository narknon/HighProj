#pragma once
#include "CoreMinimal.h"
#include "ORSightTrackingData.generated.h"

USTRUCT(BlueprintType)
struct OREGON_API FORSightTrackingData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float GainedSightTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float LostSightTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bHasLineOfSight;
    
    FORSightTrackingData();
};

