#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "CrosshairLocationUpdatedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCrosshairLocationUpdated, FVector2D, CrosshairLocation);

