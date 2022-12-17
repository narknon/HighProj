#pragma once
#include "CoreMinimal.h"
#include "ORStatDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FORStatDelegate, int32, Value);

