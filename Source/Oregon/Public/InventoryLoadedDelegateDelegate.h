#pragma once
#include "CoreMinimal.h"
#include "InventoryLoadedDelegateDelegate.generated.h"

class UORCharacterInventory;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FInventoryLoadedDelegate, UORCharacterInventory*, Inventory);

