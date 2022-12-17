#pragma once
#include "CoreMinimal.h"
#include "ORActivityBase.h"
#include "ORWaitActivity.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class OREGON_API UORWaitActivity : public UORActivityBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WaitDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WaitDurationDeviation;
    
    UORWaitActivity();
};

