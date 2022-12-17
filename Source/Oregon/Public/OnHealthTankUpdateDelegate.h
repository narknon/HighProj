#pragma once
#include "CoreMinimal.h"
#include "OnHealthTankUpdateDelegate.generated.h"

class AORHealthTankItem;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FiveParams(FOnHealthTankUpdate, AORHealthTankItem*, Tank, float, Current, float, Max, float, Change, bool, DamageEvent);

