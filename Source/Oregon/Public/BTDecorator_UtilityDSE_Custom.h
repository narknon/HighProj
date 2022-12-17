#pragma once
#include "CoreMinimal.h"
#include "BTDecorator_UtilityFunction.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "BTDecorator_UtilityDSE_Custom.generated.h"

class UDecisionScoreEvaluatorCustom;

UCLASS(Blueprintable)
class OREGON_API UBTDecorator_UtilityDSE_Custom : public UBTDecorator_UtilityFunction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, NoClear, meta=(AllowPrivateAccess=true))
    UDecisionScoreEvaluatorCustom* CustomDSE;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector TargetKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowConsiderations;
    
    UBTDecorator_UtilityDSE_Custom();
};

