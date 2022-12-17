#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UtilityDecisionContext.h"
#include "UtilityInput.generated.h"

UCLASS(Abstract, Blueprintable, DefaultToInstanced, EditInlineNew)
class OREGON_API UUtilityInput : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Description;
    
    UUtilityInput();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float Score(const FUtilityDecisionContext& DecisionContext) const;
    
};

