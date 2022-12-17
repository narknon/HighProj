#pragma once
#include "CoreMinimal.h"
#include "OnHealthTankFilledDelegate.generated.h"

class AORHealthTankItem;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnHealthTankFilled, AORHealthTankItem*, Tank);

