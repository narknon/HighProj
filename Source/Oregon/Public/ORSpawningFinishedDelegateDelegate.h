#pragma once
#include "CoreMinimal.h"
#include "ORSpawningFinishedDelegateDelegate.generated.h"

class UORSpawnPointComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FORSpawningFinishedDelegate, UORSpawnPointComponent*, SpawnPointComponent);

