#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BTTask_CancelAllFireModes.generated.h"

UCLASS(Blueprintable)
class OREGON_API UBTTask_CancelAllFireModes : public UBTTaskNode {
    GENERATED_BODY()
public:
    UBTTask_CancelAllFireModes();
};

