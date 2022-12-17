#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EORMissionState.h"
#include "MissionStateDelegateDelegate.h"
#include "DeferredMissionCallback.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct FDeferredMissionCallback {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* Owner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMissionStateDelegate Callback;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag MissionTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EORMissionState State;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOnlyDebug;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Ordinal;
    
    OREGON_API FDeferredMissionCallback();
};

