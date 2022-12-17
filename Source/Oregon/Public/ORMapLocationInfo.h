#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ORMapLocationInfo.generated.h"

USTRUCT(BlueprintType)
struct FORMapLocationInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Location;
    
    OREGON_API FORMapLocationInfo();
};

