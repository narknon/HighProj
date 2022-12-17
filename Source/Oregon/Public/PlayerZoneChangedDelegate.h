#pragma once
#include "CoreMinimal.h"
#include "PlayerZoneChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPlayerZoneChanged, bool, bInGameplayZone);

