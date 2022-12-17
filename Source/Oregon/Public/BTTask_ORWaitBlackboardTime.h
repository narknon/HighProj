#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/Tasks/BTTask_WaitBlackboardTime.h"
#include "BTTask_ORWaitBlackboardTime.generated.h"

UCLASS(Blueprintable)
class OREGON_API UBTTask_ORWaitBlackboardTime : public UBTTask_WaitBlackboardTime {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bClearBlackboardKeyOnWaitStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bClearBlackboardKeyOnWaitFinish;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bClearBlackboardKeyOnWaitAbort;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRestartOnBlackboardKeyChanged;
    
public:
    UBTTask_ORWaitBlackboardTime();
};

