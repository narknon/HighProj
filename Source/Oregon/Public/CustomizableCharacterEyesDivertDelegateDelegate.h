#pragma once
#include "CoreMinimal.h"
#include "CustomizableCharacterEyesDivertDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FCustomizableCharacterEyesDivertDelegate, float, Yaw, float, Pitch);

