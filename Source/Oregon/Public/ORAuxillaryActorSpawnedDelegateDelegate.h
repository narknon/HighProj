#pragma once
#include "CoreMinimal.h"
#include "OREnemySpawningData.h"
#include "ORAuxillaryActorSpawnedDelegateDelegate.generated.h"

class AORAuxillarySpawnable;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FORAuxillaryActorSpawnedDelegate, AORAuxillarySpawnable*, Spawnable, const FOREnemySpawningData&, EnemySpawningData);

