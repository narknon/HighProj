#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BTDecorator_UtilityFunction.generated.h"

UCLASS(Abstract, Blueprintable)
class BTUTILITYPLUGIN_API UBTDecorator_UtilityFunction : public UBTDecorator {
    GENERATED_BODY()
public:
    UBTDecorator_UtilityFunction();
};

