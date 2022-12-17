#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/Tasks/BTTask_Wait.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DifficultyFloat -FallbackName=DifficultyFloat
#include "BTTask_ORWaitDifficulty.generated.h"

UCLASS(Blueprintable)
class OREGON_API UBTTask_ORWaitDifficulty : public UBTTask_Wait {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDifficultyFloat DifficultyWaitTime;
    
public:
    UBTTask_ORWaitDifficulty();
};

