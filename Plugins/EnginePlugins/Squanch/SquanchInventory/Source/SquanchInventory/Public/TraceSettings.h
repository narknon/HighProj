#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EExtentTraceType.h"
#include "TraceSettings.generated.h"

USTRUCT(BlueprintType)
struct FTraceSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EExtentTraceType> TraceType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector TraceExtent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CollisionProfileName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseMultiTrace;
    
    SQUANCHINVENTORY_API FTraceSettings();
};

