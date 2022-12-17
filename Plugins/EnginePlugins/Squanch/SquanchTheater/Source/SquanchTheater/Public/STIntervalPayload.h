#pragma once
#include "CoreMinimal.h"
#include "STIntervalPayload.generated.h"

USTRUCT(BlueprintType)
struct FSTIntervalPayload {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSkip;
    
    SQUANCHTHEATER_API FSTIntervalPayload();
};

