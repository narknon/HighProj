#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/Services/BTService_BlackboardBase.h"
#include "BTService_ORScopedBlackboardTimer.generated.h"

UCLASS(Blueprintable)
class OREGON_API UBTService_ORScopedBlackboardTimer : public UBTService_BlackboardBase {
    GENERATED_BODY()
public:
    UBTService_ORScopedBlackboardTimer();
};

