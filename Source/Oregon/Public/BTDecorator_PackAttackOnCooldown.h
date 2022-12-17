#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BTDecorator_PackAttackOnCooldown.generated.h"

UCLASS(Blueprintable)
class OREGON_API UBTDecorator_PackAttackOnCooldown : public UBTDecorator {
    GENERATED_BODY()
public:
    UBTDecorator_PackAttackOnCooldown();
};

