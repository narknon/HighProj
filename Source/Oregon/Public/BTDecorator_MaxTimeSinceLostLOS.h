#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BTDecorator_MaxTimeSinceLostLOS.generated.h"

UCLASS(Blueprintable)
class OREGON_API UBTDecorator_MaxTimeSinceLostLOS : public UBTDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxLOSLostTime;
    
    UBTDecorator_MaxTimeSinceLostLOS();
};

