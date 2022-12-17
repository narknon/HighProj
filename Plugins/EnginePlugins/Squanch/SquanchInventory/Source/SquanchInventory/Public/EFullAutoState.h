#pragma once
#include "CoreMinimal.h"
#include "EFullAutoState.generated.h"

UENUM(BlueprintType)
enum EFullAutoState {
    EFAS_Ready,
    EFAS_Prefire,
    EFAS_Postfire,
    EFAS_EndingPrefire,
    EFAS_EndingFire,
    EFAS_QueuedEndingFire,
    EFAS_MAX UMETA(Hidden),
};

