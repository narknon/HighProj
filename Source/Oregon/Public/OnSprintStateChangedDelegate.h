#pragma once
#include "CoreMinimal.h"
#include "OnSprintStateChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSprintStateChanged, bool, bIsSprinting);

