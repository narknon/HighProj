#pragma once
#include "CoreMinimal.h"
#include "ORScannableEnabledChangedSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FORScannableEnabledChangedSignature, const bool, NewEnabled);

