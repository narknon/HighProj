#pragma once
#include "CoreMinimal.h"
#include "UtilityInput.h"
#include "UAIInputTargetORCharHealth.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class OREGON_API UUAIInputTargetORCharHealth : public UUtilityInput {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIncludeHealthUpgrades;
    
    UUAIInputTargetORCharHealth();
};

