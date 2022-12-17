#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineBaseTypes.h"
#include "ORAnchorTickAggregatorTickFunction.generated.h"

USTRUCT(BlueprintType)
struct FORAnchorTickAggregatorTickFunction : public FTickFunction {
    GENERATED_BODY()
public:
    OREGON_API FORAnchorTickAggregatorTickFunction();
};

