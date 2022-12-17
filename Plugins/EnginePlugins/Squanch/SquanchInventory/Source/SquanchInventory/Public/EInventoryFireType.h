#pragma once
#include "CoreMinimal.h"
#include "EInventoryFireType.generated.h"

UENUM(BlueprintType)
enum EInventoryFireType {
    EIFT_Primary,
    EIFT_Secondary,
    EIFT_Support,
    EIFT_Unknown,
    EIFT_MAX UMETA(Hidden),
};

