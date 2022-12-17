#pragma once
#include "CoreMinimal.h"
#include "ItemAimModifiers.generated.h"

class UCurveFloat;

USTRUCT(BlueprintType)
struct FItemAimModifiers {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* PitchSensitivityMod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* YawSensitivityMod;
    
    OREGON_API FItemAimModifiers();
};

