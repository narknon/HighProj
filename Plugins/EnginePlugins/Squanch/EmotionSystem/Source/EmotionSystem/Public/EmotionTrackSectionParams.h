#pragma once
#include "CoreMinimal.h"
#include "EEmotionState.h"
#include "EmotionTrackSectionParams.generated.h"

USTRUCT(BlueprintType)
struct FEmotionTrackSectionParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EEmotionState Emotion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ExtraDuration;
    
    EMOTIONSYSTEM_API FEmotionTrackSectionParams();
};

