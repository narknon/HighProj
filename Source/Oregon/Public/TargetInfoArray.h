#pragma once
#include "CoreMinimal.h"
#include "AimAssistTargetInfo.h"
#include "TargetInfoArray.generated.h"

USTRUCT(BlueprintType)
struct OREGON_API FTargetInfoArray {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAimAssistTargetInfo> TargetInfos;
    
    FTargetInfoArray();
};

