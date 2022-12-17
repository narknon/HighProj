#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ORKrubisJumpPointPair.generated.h"

USTRUCT(BlueprintType)
struct FORKrubisJumpPointPair {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Start;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector End;
    
    OREGON_API FORKrubisJumpPointPair();
};

