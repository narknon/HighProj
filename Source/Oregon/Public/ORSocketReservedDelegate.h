#pragma once
#include "CoreMinimal.h"
#include "ORSocketData.h"
#include "ORSocketReservedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FORSocketReserved, FORSocketData, Socket);

