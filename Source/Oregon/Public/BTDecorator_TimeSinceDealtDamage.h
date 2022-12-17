#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BTDecorator_TimeSinceDealtDamage.generated.h"

UCLASS(Blueprintable)
class OREGON_API UBTDecorator_TimeSinceDealtDamage : public UBTDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxTimeSinceDealtDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOnlyPlayer;
    
    UBTDecorator_TimeSinceDealtDamage();
};

