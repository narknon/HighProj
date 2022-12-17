#pragma once
#include "CoreMinimal.h"
#include "GenericTeamAgentInterface.h"
#include "CrosshairTargetUpdatedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FCrosshairTargetUpdated, bool, bHasTarget, TEnumAsByte<ETeamAttitude::Type>, TargetAttitude);

