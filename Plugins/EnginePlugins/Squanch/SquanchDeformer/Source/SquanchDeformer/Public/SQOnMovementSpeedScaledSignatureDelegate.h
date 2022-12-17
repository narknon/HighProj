#pragma once
#include "CoreMinimal.h"
#include "SQOnMovementSpeedScaledSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSQOnMovementSpeedScaledSignature, float, SpeedScale);

