#pragma once
#include "CoreMinimal.h"
#include "EHoverType.h"
#include "OnHoverStateChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnHoverStateChanged, bool, bActive, TEnumAsByte<EHoverType>, HoverType);

