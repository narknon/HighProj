#pragma once
#include "CoreMinimal.h"
#include "EORVocalizationType.generated.h"

UENUM(BlueprintType)
enum class EORVocalizationType : uint8 {
    Alert,
    Attack,
    Death,
    Hurt,
    Idle,
    Spawn,
};

