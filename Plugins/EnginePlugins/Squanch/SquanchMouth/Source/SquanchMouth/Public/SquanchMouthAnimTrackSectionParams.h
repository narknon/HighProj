#pragma once
#include "CoreMinimal.h"
#include "SquanchMouthAnimTrackSectionParams.generated.h"

class USquanchMouthAnimAsset;

USTRUCT(BlueprintType)
struct FSquanchMouthAnimTrackSectionParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USquanchMouthAnimAsset* MouthAnim;
    
    SQUANCHMOUTH_API FSquanchMouthAnimTrackSectionParams();
};

