#pragma once
#include "CoreMinimal.h"
#include "ItemEventData.h"
#include "CurrentItemEventsDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCurrentItemEvents, TArray<FItemEventData>, ItemEventsData);

