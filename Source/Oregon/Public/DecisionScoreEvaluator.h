#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "DecisionScoreEvaluator.generated.h"

class UUtilityConsideration;

UCLASS(Abstract, Blueprintable)
class OREGON_API UDecisionScoreEvaluator : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UUtilityConsideration*> Considerations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ScoreWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ShortName;
    
public:
    UDecisionScoreEvaluator();
};

