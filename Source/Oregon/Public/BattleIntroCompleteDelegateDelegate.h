#pragma once
#include "CoreMinimal.h"
#include "BattleIntroCompleteDelegateDelegate.generated.h"

class AORBattleManagerBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FBattleIntroCompleteDelegate, AORBattleManagerBase*, Battle);

