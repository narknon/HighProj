#pragma once
#include "CoreMinimal.h"
#include "BaseCustomizableCharacterEyesDivertDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FBaseCustomizableCharacterEyesDivertDelegate, float, Yaw, float, Pitch);

