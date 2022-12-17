#pragma once
#include "CoreMinimal.h"
#include "UtilityInput.h"
#include "UAIInputTargetInFrontalCone2D.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class OREGON_API UUAIInputTargetInFrontalCone2D : public UUtilityInput {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ConeHalfAngleDeg;
    
    UUAIInputTargetInFrontalCone2D();
};

