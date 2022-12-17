#pragma once
#include "CoreMinimal.h"
#include "EActivityExecutionMode.generated.h"

UENUM(BlueprintType)
enum class EActivityExecutionMode : uint8 {
    ForwardSequential,
    BackwardSequential,
    Random,
};

