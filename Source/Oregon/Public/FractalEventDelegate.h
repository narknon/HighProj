#pragma once
#include "CoreMinimal.h"
#include "FractalEventDelegate.generated.h"

class AORFractalManager;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FFractalEvent, AORFractalManager*, FractalManager);

