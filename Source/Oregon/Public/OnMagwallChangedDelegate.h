#pragma once
#include "CoreMinimal.h"
#include "OnMagwallChangedDelegate.generated.h"

class UORInteractableComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnMagwallChanged, bool, bActive, UORInteractableComponent*, MagwallAnchor);

