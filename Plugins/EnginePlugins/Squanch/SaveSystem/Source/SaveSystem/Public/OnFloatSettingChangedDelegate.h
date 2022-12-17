#pragma once
#include "CoreMinimal.h"
#include "OnFloatSettingChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnFloatSettingChanged, float, NewFloatValue);

