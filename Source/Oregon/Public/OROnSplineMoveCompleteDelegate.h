#pragma once
#include "CoreMinimal.h"
#include "OROnSplineMoveCompleteDelegate.generated.h"

class ACharacter;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOROnSplineMoveComplete, ACharacter*, Character);

