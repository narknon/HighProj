#pragma once
#include "CoreMinimal.h"
#include "BattleEndDelegateDelegate.generated.h"

class AORBattleManagerBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FBattleEndDelegate, AORBattleManagerBase*, Battle, const bool, BattleComplete);

