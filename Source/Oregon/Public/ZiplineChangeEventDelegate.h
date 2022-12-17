#pragma once
#include "CoreMinimal.h"
#include "ZiplineChangeEventDelegate.generated.h"

class UORInteractableComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FZiplineChangeEvent, bool, bActive, UORInteractableComponent*, ZiplineAnchor);

