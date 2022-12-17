#pragma once
#include "CoreMinimal.h"
#include "EnemyDiedDelegateDelegate.generated.h"

class UObject;
class AORAICharacter;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FEnemyDiedDelegate, AORAICharacter*, Enemy, UObject*, Killer);

