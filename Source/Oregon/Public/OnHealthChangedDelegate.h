#pragma once
#include "CoreMinimal.h"
#include "OnHealthChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnHealthChanged, float, Change, float, NewValue, bool, Silent);

