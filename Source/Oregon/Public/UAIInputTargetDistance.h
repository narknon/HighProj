#pragma once
#include "CoreMinimal.h"
#include "UtilityInput.h"
#include "UAIInputTargetDistance.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class OREGON_API UUAIInputTargetDistance : public UUtilityInput {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RangeMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RangeMax;
    
    UUAIInputTargetDistance();
};

