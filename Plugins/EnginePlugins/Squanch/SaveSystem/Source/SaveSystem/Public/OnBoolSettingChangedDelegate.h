#pragma once
#include "CoreMinimal.h"
#include "OnBoolSettingChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnBoolSettingChanged, bool, bNewBoolValue);

