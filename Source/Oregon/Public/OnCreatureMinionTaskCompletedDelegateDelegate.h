#pragma once
#include "CoreMinimal.h"
#include "ORCreaturePheromoneMarker.h"
#include "ORAICreatureMinionCharacter.h"
#include "UObject/SparseDelegate.h"
#include "OnCreatureMinionTaskCompletedDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_SPARSE_DELEGATE_OneParam(FOnCreatureMinionTaskCompletedDelegate, AORAICreatureMinionCharacter, OnCreatureMinionTaskCompleted, AORAICreatureMinionCharacter*, Minion);

