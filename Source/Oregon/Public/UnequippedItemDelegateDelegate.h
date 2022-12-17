#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "UnequippedItemDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FUnequippedItemDelegate, FGameplayTag, ItemTag);

