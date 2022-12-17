#pragma once
#include "CoreMinimal.h"
#include "AIActivityLoopDelegateDelegate.generated.h"

class UORActivityBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FAIActivityLoopDelegate, UORActivityBase*, Activity, int32, LoopIteration);

