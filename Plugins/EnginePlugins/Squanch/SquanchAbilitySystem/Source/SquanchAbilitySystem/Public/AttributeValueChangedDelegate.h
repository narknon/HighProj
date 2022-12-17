#pragma once
#include "CoreMinimal.h"
#include "AttributeValueChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FAttributeValueChanged, float, Change, float, NewValue);

