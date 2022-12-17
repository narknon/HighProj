#pragma once
#include "CoreMinimal.h"
#include "SquanchMouthViseme.generated.h"

UENUM(BlueprintType)
enum class SquanchMouthViseme : uint8 {
    VIS_SIL,
    VIS_AH,
    VIS_EH,
    VIS_DN,
    VIS_EK,
    VIS_THD,
    VIS_L,
    VIS_SZ,
    VIS_PBM,
    VIS_FV,
    VIS_OH,
    VIS_UWR,
    VIS_MAX UMETA(Hidden),
};

