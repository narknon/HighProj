#pragma once
#include "CoreMinimal.h"
#include "OnSlideFuelChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnSlideFuelChanged, float, Current, float, Max, float, Diff);

