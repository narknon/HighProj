#pragma once
#include "CoreMinimal.h"
#include "PlayerJumpedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPlayerJumped, int32, JumpNumber);

