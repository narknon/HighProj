#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EquippedItemDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEquippedItemDelegate, FGameplayTag, ItemTag);

