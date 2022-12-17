#pragma once
#include "CoreMinimal.h"
#include "OnHealthRechargeStateChangedDelegate.generated.h"

class AORHealthTankItem;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnHealthRechargeStateChanged, AORHealthTankItem*, Tank, bool, bRecharging);

