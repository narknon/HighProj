#pragma once
#include "CoreMinimal.h"
#include "ELezduitFireState.generated.h"

UENUM(BlueprintType)
enum ELezduitFireState {
    ELFS_Ready,
    ELFS_QueuedCharge,
    ELFS_Charge,
    ELFS_Loop,
    ELFS_Postfire,
    ELFS_MAX UMETA(Hidden),
};

