#pragma once
#include "CoreMinimal.h"
#include "STConditionDelegateDelegate.generated.h"

class USTCondition;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSTConditionDelegate, USTCondition*, InObject, bool, InValue);

