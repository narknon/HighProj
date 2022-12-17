#pragma once
#include "CoreMinimal.h"
#include "OnPauseStateChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPauseStateChanged, bool, bNewPauseState);

