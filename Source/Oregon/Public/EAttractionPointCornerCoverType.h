#pragma once
#include "CoreMinimal.h"
#include "EAttractionPointCornerCoverType.generated.h"

UENUM(BlueprintType)
enum class EAttractionPointCornerCoverType : uint8 {
    None,
    Left,
    Right,
    Both,
};

