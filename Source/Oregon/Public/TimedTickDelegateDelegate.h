#pragma once
#include "CoreMinimal.h"
#include "TimedTickDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FTimedTickDelegate, float, DeltaTime, float, TotalElapsed);

