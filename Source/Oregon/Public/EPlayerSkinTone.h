#pragma once
#include "CoreMinimal.h"
#include "EPlayerSkinTone.generated.h"

UENUM(BlueprintType)
enum class EPlayerSkinTone : uint8 {
    None,
    VeryFair,
    Fair,
    Medium,
    Dark,
    MediumDark,
    VeryDark,
};

