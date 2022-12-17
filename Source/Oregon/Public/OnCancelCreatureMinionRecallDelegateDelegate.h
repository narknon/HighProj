#pragma once
#include "CoreMinimal.h"
#include "UObject/SparseDelegate.h"
#include "OnCancelCreatureMinionRecallDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_SPARSE_DELEGATE_OneParam(FOnCancelCreatureMinionRecallDelegate, AORAICreatureMinionCharacter, OnCreatureMinionTaskCompleted, AORAICreatureMinionCharacter*, Minion);

