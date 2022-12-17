#pragma once
#include "CoreMinimal.h"
#include "AIActivityEndDelegateDelegate.generated.h"

class UORActivityBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAIActivityEndDelegate, UORActivityBase*, Activity);

