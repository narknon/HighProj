#pragma once
#include "CoreMinimal.h"
#include "EInventoryTransactionType.generated.h"

UENUM(BlueprintType)
enum EInventoryTransactionType {
    EITT_Silent,
    EITT_NoFeedback,
    EITT_Purchased,
    EITT_Found,
    EITT_Received,
    EITT_Sold,
    EITT_Gave,
    EITT_MAX UMETA(Hidden),
};

