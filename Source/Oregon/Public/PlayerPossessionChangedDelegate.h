#pragma once
#include "CoreMinimal.h"
#include "PlayerPossessionChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPlayerPossessionChanged, bool, bPossessed);

