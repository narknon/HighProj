#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "ORBTOverride.generated.h"

class UBehaviorTree;

USTRUCT(BlueprintType)
struct FORBTOverride {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBehaviorTree* BehaviorTree;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag InjectionTag;
    
    OREGON_API FORBTOverride();
};

