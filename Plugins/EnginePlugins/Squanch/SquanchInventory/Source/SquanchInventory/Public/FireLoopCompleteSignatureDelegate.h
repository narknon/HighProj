#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "FireLoopCompleteSignatureDelegate.generated.h"

class USQFireLoopComponent;
class ASQFireableInventoryItem;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FFireLoopCompleteSignature, ASQFireableInventoryItem*, FireableItem, FGameplayTag, FireModeTag, USQFireLoopComponent*, FireLoop);

