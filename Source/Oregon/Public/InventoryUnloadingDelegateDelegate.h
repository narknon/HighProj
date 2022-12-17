#pragma once
#include "CoreMinimal.h"
#include "InventoryUnloadingDelegateDelegate.generated.h"

class UORCharacterInventory;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FInventoryUnloadingDelegate, UORCharacterInventory*, Inventory);

