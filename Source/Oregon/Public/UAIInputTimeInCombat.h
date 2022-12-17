#pragma once
#include "CoreMinimal.h"
#include "UtilityInput.h"
#include "UAIInputTimeInCombat.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class OREGON_API UUAIInputTimeInCombat : public UUtilityInput {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxTime;
    
    UUAIInputTimeInCombat();
};

