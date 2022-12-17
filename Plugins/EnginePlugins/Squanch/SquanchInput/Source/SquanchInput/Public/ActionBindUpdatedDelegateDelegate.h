#pragma once
#include "CoreMinimal.h"
#include "ActionBindUpdatedDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FActionBindUpdatedDelegate, FName, ActionName);

