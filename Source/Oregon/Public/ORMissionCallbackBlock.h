#pragma once
#include "CoreMinimal.h"
#include "MissionDelegateListDelegate.h"
#include "MissionStateDelegateListDelegate.h"
#include "ORMissionCallbackBlock.generated.h"

USTRUCT(BlueprintType)
struct FORMissionCallbackBlock {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMissionStateDelegateList StartCallbacksNoParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMissionStateDelegateList CompleteCallbacksNoParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMissionDelegateList StartCallbacks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMissionDelegateList CompleteCallbacks;
    
    OREGON_API FORMissionCallbackBlock();
};

