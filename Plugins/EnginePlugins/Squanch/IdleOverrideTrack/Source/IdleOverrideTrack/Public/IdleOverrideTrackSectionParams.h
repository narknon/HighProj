#pragma once
#include "CoreMinimal.h"
#include "IdleOverrideTrackSectionParams.generated.h"

class UAnimSequence;

USTRUCT(BlueprintType)
struct FIdleOverrideTrackSectionParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* IdleAnimation;
    
    IDLEOVERRIDETRACK_API FIdleOverrideTrackSectionParams();
};

