#pragma once
#include "CoreMinimal.h"
#include "OnXenoslaughterResetDelegate.generated.h"

class APawn;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnXenoslaughterReset, APawn*, NewPlayerPawn);

