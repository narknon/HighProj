#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BTDecorator_PackDistance.generated.h"

UCLASS(Blueprintable)
class OREGON_API UBTDecorator_PackDistance : public UBTDecorator {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DistanceThreshold;
    
public:
    UBTDecorator_PackDistance();
};

