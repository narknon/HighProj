#pragma once
#include "CoreMinimal.h"
#include "ORWaveSpawnResult.h"
#include "WaveSpawningCompleteDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FWaveSpawningCompleteDelegate, const int32, Wave, const FORWaveSpawnResult, SpawnWaveResult);

