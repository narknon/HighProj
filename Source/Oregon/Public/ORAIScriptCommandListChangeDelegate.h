#pragma once
#include "CoreMinimal.h"
#include "ORAIScriptCommandListChangeDelegate.generated.h"

class AORAIController;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FORAIScriptCommandListChange, AORAIController*, ORAIController);

