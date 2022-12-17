#pragma once
#include "CoreMinimal.h"
#include "BTDecorator_UtilityFunction.h"
#include "BTDecorator_UtilityDSE_RandomRecharge.generated.h"

UCLASS(Blueprintable)
class OREGON_API UBTDecorator_UtilityDSE_RandomRecharge : public UBTDecorator_UtilityFunction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinUtility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxLimitUtility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DefaultMaxUtility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RechargeMaxUtilityRate;
    
    UBTDecorator_UtilityDSE_RandomRecharge();
};

