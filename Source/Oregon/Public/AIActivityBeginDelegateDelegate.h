#pragma once
#include "CoreMinimal.h"
#include "AIActivityBeginDelegateDelegate.generated.h"

class UORActivityBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAIActivityBeginDelegate, UORActivityBase*, Activity);

