#pragma once
#include "CoreMinimal.h"
#include "OnXenoslaughterLoadedDelegate.generated.h"

class APawn;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnXenoslaughterLoaded, APawn*, PlayerPawn);

