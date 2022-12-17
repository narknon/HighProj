#pragma once
#include "CoreMinimal.h"
#include "EORPlayBehavior.generated.h"

UENUM(BlueprintType)
enum class EORPlayBehavior : uint8 {
    PlayOnce,
    PlayMultiple_Linear,
    PlayMultiple_Linear_Loop,
    PlayMultiple_Shuffle,
    PlayMultiple_Shuffle_Loop,
    PlayRandom,
};

