#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineBaseTypes.h"
#include "AkTickAggregatorTickFunction.generated.h"

USTRUCT(BlueprintType)
struct FAkTickAggregatorTickFunction : public FTickFunction {
    GENERATED_BODY()
public:
    AKAUDIO_API FAkTickAggregatorTickFunction();
};

