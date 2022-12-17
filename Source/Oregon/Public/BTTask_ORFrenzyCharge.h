#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BTTask_ORFrenzyCharge.generated.h"

class UGameplayEffect;

UCLASS(Blueprintable)
class OREGON_API UBTTask_ORFrenzyCharge : public UBTTaskNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayEffect> ImpactDamageEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnablePhysicalAnimation;
    
    UBTTask_ORFrenzyCharge();
};

