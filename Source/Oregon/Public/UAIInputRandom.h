#pragma once
#include "CoreMinimal.h"
#include "UtilityInput.h"
#include "UAIInputRandom.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class OREGON_API UUAIInputRandom : public UUtilityInput {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxValue;
    
    UUAIInputRandom();
};

