#pragma once
#include "CoreMinimal.h"
#include "EInitialEquipState.generated.h"

UENUM(BlueprintType)
enum EInitialEquipState {
    EIES_Default,
    EIES_Equipped,
    EIES_Unequipped,
    EIES_MAX UMETA(Hidden),
};

