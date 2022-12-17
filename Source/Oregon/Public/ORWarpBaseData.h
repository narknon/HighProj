#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ORWarpBaseData.generated.h"

class UWorld;

USTRUCT(BlueprintType)
struct FORWarpBaseData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UWorld> WorldRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator ExtraRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTransient;
    
    OREGON_API FORWarpBaseData();
};

