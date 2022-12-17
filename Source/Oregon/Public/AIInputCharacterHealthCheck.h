#pragma once
#include "CoreMinimal.h"
#include "UtilityInput.h"
#include "AIInputCharacterHealthCheck.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class OREGON_API UAIInputCharacterHealthCheck : public UUtilityInput {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HealthMin;
    
    UAIInputCharacterHealthCheck();
};

