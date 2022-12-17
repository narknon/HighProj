#pragma once
#include "CoreMinimal.h"
#include "ESTChoiceOutput.generated.h"

UENUM(BlueprintType)
enum class ESTChoiceOutput : uint8 {
    Chose,
    NoChoice,
    Timeout,
};

