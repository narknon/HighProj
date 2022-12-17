#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BTDecorator_RecentlyMitigatedDamage.generated.h"

UCLASS(Blueprintable)
class OREGON_API UBTDecorator_RecentlyMitigatedDamage : public UBTDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOnlyBlocked;
    
    UBTDecorator_RecentlyMitigatedDamage();
};

