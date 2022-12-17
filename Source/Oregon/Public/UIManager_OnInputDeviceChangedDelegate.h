#pragma once
#include "CoreMinimal.h"
#include "EInputDeviceType.h"
#include "UIManager_OnInputDeviceChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FUIManager_OnInputDeviceChanged, TEnumAsByte<EInputDeviceType>, NewInputDevice);

