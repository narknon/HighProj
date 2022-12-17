#pragma once
#include "CoreMinimal.h"
#include "GazeDebugeDelegateDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FGazeDebugeDelegate, AActor*, Object);

