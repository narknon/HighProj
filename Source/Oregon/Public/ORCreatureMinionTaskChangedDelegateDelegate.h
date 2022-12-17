#pragma once
#include "CoreMinimal.h"
#include "EORCreatureMinionTask.h"
#include "ORCreatureMinionTaskChangedDelegateDelegate.generated.h"

class AORAICreatureMinionController;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FORCreatureMinionTaskChangedDelegate, AORAICreatureMinionController*, CreatureMinionController, EORCreatureMinionTask, OldTask, EORCreatureMinionTask, NewTask);

