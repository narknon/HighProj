#pragma once
#include "CoreMinimal.h"
#include "PlayerJetpackStateChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPlayerJetpackStateChanged, bool, bDisabled);

