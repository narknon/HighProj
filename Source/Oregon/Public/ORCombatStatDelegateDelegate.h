#pragma once
#include "CoreMinimal.h"
#include "ORCombatStatDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_FourParams(FORCombatStatDelegate, int32, CallbackId, int32, PrevValue, int32, CurrentValue, int32, MaxValue);

