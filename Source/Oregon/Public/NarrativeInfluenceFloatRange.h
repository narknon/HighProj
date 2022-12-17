#pragma once
#include "CoreMinimal.h"
#include "RangeValueType.h"
#include "NarrativeInfluenceFloatRange.generated.h"

USTRUCT(BlueprintType)
struct FNarrativeInfluenceFloatRange {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float InnerValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float OuterValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    TEnumAsByte<RangeValueType> ValueType;
    
    OREGON_API FNarrativeInfluenceFloatRange();
};

