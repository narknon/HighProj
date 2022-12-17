#pragma once
#include "CoreMinimal.h"
#include "GoopRestoredDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FGoopRestoredDelegate, FName, BoneName);

