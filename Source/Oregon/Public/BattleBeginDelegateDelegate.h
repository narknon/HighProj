#pragma once
#include "CoreMinimal.h"
#include "BattleBeginDelegateDelegate.generated.h"

class AORBattleManagerBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FBattleBeginDelegate, AORBattleManagerBase*, Battle);

