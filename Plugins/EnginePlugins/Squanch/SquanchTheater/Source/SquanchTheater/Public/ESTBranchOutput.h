#pragma once
#include "CoreMinimal.h"
#include "ESTBranchOutput.generated.h"

UENUM(BlueprintType)
enum class ESTBranchOutput : uint8 {
    then,
    OnPause,
    OnResume,
};

