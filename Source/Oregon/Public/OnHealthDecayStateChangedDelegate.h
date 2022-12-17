#pragma once
#include "CoreMinimal.h"
#include "OnHealthDecayStateChangedDelegate.generated.h"

class AORHealthTankItem;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnHealthDecayStateChanged, AORHealthTankItem*, Tank, bool, bRecharging);

