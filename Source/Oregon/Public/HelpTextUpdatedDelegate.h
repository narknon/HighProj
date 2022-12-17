#pragma once
#include "CoreMinimal.h"
#include "HelpTextUpdatedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FHelpTextUpdated, const FText, TextToDisplay);

