#pragma once
#include "CoreMinimal.h"
#include "AIActivityInterruptDelegateDelegate.generated.h"

class UORActivityBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAIActivityInterruptDelegate, UORActivityBase*, Activity);

