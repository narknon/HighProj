#pragma once
#include "CoreMinimal.h"
#include "EORAIHostileAwareness.generated.h"

UENUM(BlueprintType)
enum class EORAIHostileAwareness : uint8 {
    EHA_Unaware,
    EHA_Alert,
    EHA_Combat,
    EHA_Narrative,
    EHA_Ambush,
    EHA_Count,
    EHA_None = 0xFF,
};

