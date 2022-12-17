#pragma once
#include "CoreMinimal.h"
#include "GoopDestroyedDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FGoopDestroyedDelegate, FName, BoneName);

