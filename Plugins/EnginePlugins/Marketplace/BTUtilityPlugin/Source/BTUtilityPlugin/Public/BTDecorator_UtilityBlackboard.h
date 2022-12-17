#pragma once
#include "CoreMinimal.h"
#include "BTDecorator_UtilityFunction.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "BTDecorator_UtilityBlackboard.generated.h"

UCLASS(Blueprintable)
class BTUTILITYPLUGIN_API UBTDecorator_UtilityBlackboard : public UBTDecorator_UtilityFunction {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector UtilityValueKey;
    
public:
    UBTDecorator_UtilityBlackboard();
};

