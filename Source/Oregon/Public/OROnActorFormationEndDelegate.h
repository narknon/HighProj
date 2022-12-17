#pragma once
#include "CoreMinimal.h"
#include "OROnActorFormationEndDelegate.generated.h"

class AORAICharacter;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOROnActorFormationEnd, AORAICharacter*, SpawnedActor);

