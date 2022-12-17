#pragma once
#include "CoreMinimal.h"
#include "TimeSlowHandle.generated.h"

USTRUCT(BlueprintType)
struct FTimeSlowHandle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TimeSlowIndex;
    
    OREGON_API FTimeSlowHandle();
};

