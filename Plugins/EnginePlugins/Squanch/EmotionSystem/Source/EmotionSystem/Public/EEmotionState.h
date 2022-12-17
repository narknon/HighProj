#pragma once
#include "CoreMinimal.h"
#include "EEmotionState.generated.h"

UENUM(BlueprintType)
enum class EEmotionState : uint8 {
    Happy,
    Sarcastic,
    Excited,
    Wicked,
    Neutral,
    Confused,
    Determined,
    Surprised,
    Sad,
    Angry,
    Afraid,
    Disgusted,
    Exhausted,
};

