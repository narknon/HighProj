#pragma once
#include "CoreMinimal.h"
#include "OREnemySpawningData.h"
#include "OREnemySpawnedDelegateDelegate.generated.h"

class AORAICharacter;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOREnemySpawnedDelegate, AORAICharacter*, Enemy, const FOREnemySpawningData&, EnemySpawningData);

