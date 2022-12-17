#pragma once
#include "CoreMinimal.h"
#include "ORBeginLoopEndComponentValueChangeDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FORBeginLoopEndComponentValueChangeDelegate, float, Value);

