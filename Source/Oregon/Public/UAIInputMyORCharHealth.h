#pragma once
#include "CoreMinimal.h"
#include "UtilityInput.h"
#include "UAIInputMyORCharHealth.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class OREGON_API UUAIInputMyORCharHealth : public UUtilityInput {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIncludeHealthUpgrades;
    
    UUAIInputMyORCharHealth();
};

