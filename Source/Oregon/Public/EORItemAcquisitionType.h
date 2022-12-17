#pragma once
#include "CoreMinimal.h"
#include "EORItemAcquisitionType.generated.h"

UENUM(BlueprintType)
enum class EORItemAcquisitionType : uint8 {
    GrantAllItemsOnAllAcquired,
    AutoEquipFirstAcquired,
    ShowTutorialOnFirstAcquired,
};

