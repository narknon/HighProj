#pragma once
#include "CoreMinimal.h"
#include "EZiplineCannonState.generated.h"

UENUM(BlueprintType)
enum EZiplineCannonState {
    EZCS_None,
    EZCS_Extending,
    EZCS_Retracting,
    EZCS_MAX UMETA(Hidden),
};

