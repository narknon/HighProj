#pragma once
#include "CoreMinimal.h"
#include "DecisionScoreEvaluator.h"
#include "DecisionScoreEvaluatorCustom.generated.h"

UCLASS(Blueprintable, DefaultToInstanced, EditInlineNew)
class OREGON_API UDecisionScoreEvaluatorCustom : public UDecisionScoreEvaluator {
    GENERATED_BODY()
public:
    UDecisionScoreEvaluatorCustom();
};

