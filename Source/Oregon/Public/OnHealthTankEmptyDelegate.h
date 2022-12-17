#pragma once
#include "CoreMinimal.h"
#include "OnHealthTankEmptyDelegate.generated.h"

class AORHealthTankItem;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnHealthTankEmpty, AORHealthTankItem*, Tank);

