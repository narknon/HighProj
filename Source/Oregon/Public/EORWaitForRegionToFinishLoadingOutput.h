#pragma once
#include "CoreMinimal.h"
#include "EORWaitForRegionToFinishLoadingOutput.generated.h"

UENUM(BlueprintType)
enum class EORWaitForRegionToFinishLoadingOutput : uint8 {
    then,
    Aborted,
};

