#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BTTask_ORSetLastPackRepoTime.generated.h"

UCLASS(Blueprintable)
class OREGON_API UBTTask_ORSetLastPackRepoTime : public UBTTaskNode {
    GENERATED_BODY()
public:
    UBTTask_ORSetLastPackRepoTime();
};

