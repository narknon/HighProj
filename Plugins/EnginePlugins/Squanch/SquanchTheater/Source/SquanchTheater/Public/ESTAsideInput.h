#pragma once
#include "CoreMinimal.h"
#include "ESTAsideInput.generated.h"

UENUM(BlueprintType)
enum class ESTAsideInput : uint8 {
    execute,
    Open,
    Close,
};

