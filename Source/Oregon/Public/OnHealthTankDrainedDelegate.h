#pragma once
#include "CoreMinimal.h"
#include "OnHealthTankDrainedDelegate.generated.h"

class AORHealthTankItem;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnHealthTankDrained, AORHealthTankItem*, Tank);

