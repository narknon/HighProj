#pragma once
#include "CoreMinimal.h"
#include "CrosshairSpreadUpdatedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCrosshairSpreadUpdated, float, CrosshairSpread);

