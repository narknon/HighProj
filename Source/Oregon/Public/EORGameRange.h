#pragma once
#include "CoreMinimal.h"
#include "EORGameRange.generated.h"

UENUM(BlueprintType)
enum class EORGameRange : uint8 {
    CloseAverage,
    CloseMax,
    MidAverage,
    MidMax,
    LongAverage,
    LongMax,
};

