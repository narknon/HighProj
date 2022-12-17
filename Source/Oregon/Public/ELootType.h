#pragma once
#include "CoreMinimal.h"
#include "ELootType.generated.h"

UENUM(BlueprintType)
enum ELootType {
    ELT_Consumable,
    ELT_Item,
    ELT_Collectible,
    ELT_MAX UMETA(Hidden),
};

