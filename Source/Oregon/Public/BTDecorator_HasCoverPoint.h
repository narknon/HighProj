#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/Decorators/BTDecorator_BlackboardBase.h"
#include "BTDecorator_HasCoverPoint.generated.h"

UCLASS(Blueprintable)
class OREGON_API UBTDecorator_HasCoverPoint : public UBTDecorator_BlackboardBase {
    GENERATED_BODY()
public:
    UBTDecorator_HasCoverPoint();
};

