#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BTDecorator_IsPackLeader.generated.h"

UCLASS(Blueprintable)
class OREGON_API UBTDecorator_IsPackLeader : public UBTDecorator {
    GENERATED_BODY()
public:
    UBTDecorator_IsPackLeader();
};

