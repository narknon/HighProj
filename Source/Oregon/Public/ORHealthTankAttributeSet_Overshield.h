#pragma once
#include "CoreMinimal.h"
#include "ORHealthTankAttributeSet.h"
#include "SQGameplayAttributeData.h"
#include "ORHealthTankAttributeSet_Overshield.generated.h"

UCLASS(Blueprintable)
class OREGON_API UORHealthTankAttributeSet_Overshield : public UORHealthTankAttributeSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSQGameplayAttributeData DecayDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSQGameplayAttributeData DecayRate;
    
    UORHealthTankAttributeSet_Overshield();
};

