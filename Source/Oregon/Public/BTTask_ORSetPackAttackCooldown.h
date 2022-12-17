#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BTTask_ORSetPackAttackCooldown.generated.h"

UCLASS(Blueprintable)
class OREGON_API UBTTask_ORSetPackAttackCooldown : public UBTTaskNode {
    GENERATED_BODY()
public:
    UBTTask_ORSetPackAttackCooldown();
};

