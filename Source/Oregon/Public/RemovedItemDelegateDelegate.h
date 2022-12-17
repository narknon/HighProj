#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "RemovedItemDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FRemovedItemDelegate, FGameplayTag, ItemTag);

