#pragma once
#include "CoreMinimal.h"
#include "ECheckpointTagOptions.generated.h"

UENUM(BlueprintType)
enum class ECheckpointTagOptions : uint8 {
    OnlyThisTag,
    ThisTagAndAllChildren,
    ThisTagAndAllChildrenLeafsOnly,
    AllChildren,
    AllChildrenLeafsOnly,
};

