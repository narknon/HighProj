#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineBaseTypes.h"
#include "ORSplineFollowerAggregatorTickFunction.generated.h"

USTRUCT(BlueprintType)
struct FORSplineFollowerAggregatorTickFunction : public FTickFunction {
    GENERATED_BODY()
public:
    OREGON_API FORSplineFollowerAggregatorTickFunction();
};

