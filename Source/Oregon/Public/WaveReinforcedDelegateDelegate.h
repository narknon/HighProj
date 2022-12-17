#pragma once
#include "CoreMinimal.h"
#include "WaveReinforcedDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FWaveReinforcedDelegate, const int32, Wave);

