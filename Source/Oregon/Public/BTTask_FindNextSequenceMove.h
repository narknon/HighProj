#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/Tasks/BTTask_BlackboardBase.h"
#include "BTTask_FindNextSequenceMove.generated.h"

UCLASS(Blueprintable)
class OREGON_API UBTTask_FindNextSequenceMove : public UBTTask_BlackboardBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SequenceGroupName;
    
    UBTTask_FindNextSequenceMove();
};

