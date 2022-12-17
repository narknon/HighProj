#pragma once
#include "CoreMinimal.h"
#include "InfoScanStateChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FInfoScanStateChanged, bool, bInfoScanEnabled);

