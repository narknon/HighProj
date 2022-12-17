#pragma once
#include "CoreMinimal.h"
#include "EORAkComponentLocation.generated.h"

UENUM(BlueprintType)
enum class EORAkComponentLocation : uint8 {
    Mouth,
    Weapon,
    Body,
    Feet,
};

