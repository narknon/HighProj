#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EInventoryTransactionType.h"
#include "ItemEventFiredDelegate.generated.h"

class ASQInventoryItem;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FItemEventFired, ASQInventoryItem*, Item, FGameplayTag, EventTag, FGameplayTag, FireMode, TEnumAsByte<EInventoryTransactionType>, TransactionType);

