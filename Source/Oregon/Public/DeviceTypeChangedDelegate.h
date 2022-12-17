#pragma once
#include "CoreMinimal.h"
#include "EInputDeviceType.h"
#include "DeviceTypeChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FDeviceTypeChanged, TEnumAsByte<EInputDeviceType>, DeviceType);

