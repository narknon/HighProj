#pragma once
#include "CoreMinimal.h"
#include "BTDecorator_UtilityFunction.h"
#include "BTDecorator_UtilityConstant.generated.h"

UCLASS(Blueprintable)
class BTUTILITYPLUGIN_API UBTDecorator_UtilityConstant : public UBTDecorator_UtilityFunction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UtilityValue;
    
    UBTDecorator_UtilityConstant();
};

