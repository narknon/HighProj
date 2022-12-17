#pragma once
#include "CoreMinimal.h"
#include "EBurstFireState.generated.h"

UENUM(BlueprintType)
enum EBurstFireState {
    EBFS_Ready,
    EBFS_Prefire,
    EBFS_Postfire,
    EBFS_PostBurst,
    EBFS_QueuedPostBurst,
    EBFS_MAX UMETA(Hidden),
};

