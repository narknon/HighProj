#pragma once
#include "CoreMinimal.h"
#include "GlobalEventDelegateOneParamDelegate.generated.h"

class UORGlobalEventPayload;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FGlobalEventDelegateOneParam, const UORGlobalEventPayload*, EventData);

