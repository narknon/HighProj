#pragma once
#include "CoreMinimal.h"
#include "ORAnchorPointEnabledChangedSignatureDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FORAnchorPointEnabledChangedSignature, AActor*, Anchor, bool, bIsEnabled);

