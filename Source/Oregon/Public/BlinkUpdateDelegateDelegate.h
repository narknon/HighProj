#pragma once
#include "CoreMinimal.h"
#include "BlinkUpdateDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FBlinkUpdateDelegate, bool, bShouldBlinkOut);

