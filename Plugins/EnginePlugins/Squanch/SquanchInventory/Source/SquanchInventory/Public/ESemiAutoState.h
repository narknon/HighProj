#pragma once
#include "CoreMinimal.h"
#include "ESemiAutoState.generated.h"

UENUM(BlueprintType)
enum ESemiAutoState {
    ESAS_Ready,
    ESAS_Prefire,
    ESAS_Postfire,
    ESAS_QueuedPostfire,
    ESAS_MAX UMETA(Hidden),
};

