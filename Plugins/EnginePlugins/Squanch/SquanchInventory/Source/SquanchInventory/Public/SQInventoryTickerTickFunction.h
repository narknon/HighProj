#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineBaseTypes.h"
#include "SQInventoryTickerTickFunction.generated.h"

USTRUCT(BlueprintType)
struct FSQInventoryTickerTickFunction : public FTickFunction {
    GENERATED_BODY()
public:
    SQUANCHINVENTORY_API FSQInventoryTickerTickFunction();
};

