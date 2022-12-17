#pragma once
#include "CoreMinimal.h"
#include "OROnActorSpawnedDelegate.generated.h"

class AORAICharacter;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOROnActorSpawned, AORAICharacter*, SpawnedActor);

