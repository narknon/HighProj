#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/Decorators/BTDecorator_BlackboardBase.h"
#include "BTDecorator_IsAtDestination.generated.h"

UCLASS(Blueprintable)
class OREGON_API UBTDecorator_IsAtDestination : public UBTDecorator_BlackboardBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIncludeAgentRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ThresholdRadius;
    
    UBTDecorator_IsAtDestination();
};

