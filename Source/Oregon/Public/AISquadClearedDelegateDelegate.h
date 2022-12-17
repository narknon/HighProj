#pragma once
#include "CoreMinimal.h"
#include "AISquadClearedDelegateDelegate.generated.h"

class UORAISquad;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAISquadClearedDelegate, UORAISquad*, AISquad);

