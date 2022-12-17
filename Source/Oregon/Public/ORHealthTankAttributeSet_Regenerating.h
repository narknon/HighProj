#pragma once
#include "CoreMinimal.h"
#include "ORHealthTankAttributeSet.h"
#include "SQGameplayAttributeData.h"
#include "ORHealthTankAttributeSet_Regenerating.generated.h"

UCLASS(Blueprintable)
class OREGON_API UORHealthTankAttributeSet_Regenerating : public UORHealthTankAttributeSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSQGameplayAttributeData HealthRechargeDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSQGameplayAttributeData HealthRechargeRate;
    
    UORHealthTankAttributeSet_Regenerating();
};

