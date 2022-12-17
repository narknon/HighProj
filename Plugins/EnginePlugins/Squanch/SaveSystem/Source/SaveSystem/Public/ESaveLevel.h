#pragma once
#include "CoreMinimal.h"
#include "ESaveLevel.generated.h"

UENUM(BlueprintType)
enum ESaveLevel {
    ESL_HardSave,
    ESL_SoftSave,
    ESL_RuntimeSave,
    ESL_FlushSave,
    ESL_MAX UMETA(Hidden),
};

