#pragma once
#include "CoreMinimal.h"
#include "Evaluation/MovieScenePropertyTemplate.h"
#include "EmotionTrackSectionParams.h"
#include "EmotionSectionTemplate.generated.h"

USTRUCT(BlueprintType)
struct FEmotionSectionTemplate : public FMovieScenePropertySectionTemplate {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEmotionTrackSectionParams Data;
    
public:
    EMOTIONSYSTEM_API FEmotionSectionTemplate();
};

