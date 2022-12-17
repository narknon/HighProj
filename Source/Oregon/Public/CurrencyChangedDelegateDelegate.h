#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EInventoryTransactionType.h"
#include "CurrencyChangedDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FCurrencyChangedDelegate, FGameplayTag, Currency, int32, PreviousCount, int32, NewCount, TEnumAsByte<EInventoryTransactionType>, TransactionType);

