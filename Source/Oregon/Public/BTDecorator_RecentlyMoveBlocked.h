#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BTDecorator_RecentlyMoveBlocked.generated.h"

UCLASS(Blueprintable)
class OREGON_API UBTDecorator_RecentlyMoveBlocked : public UBTDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeThreshold;
    
    UBTDecorator_RecentlyMoveBlocked();
};

