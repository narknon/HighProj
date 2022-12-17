#pragma once
#include "CoreMinimal.h"
#include "BTDecorator_UtilityFunction.h"
#include "BTDecorator_UtilityDSE_Random.generated.h"

UCLASS(Blueprintable)
class OREGON_API UBTDecorator_UtilityDSE_Random : public UBTDecorator_UtilityFunction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinUtility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxUtility;
    
    UBTDecorator_UtilityDSE_Random();
};

