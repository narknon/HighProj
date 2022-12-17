#pragma once
#include "CoreMinimal.h"
#include "Evaluation/MovieScenePropertyTemplate.h"
#include "SubtitleTrackSectionParams.h"
#include "SubtitleSectionTemplate.generated.h"

USTRUCT(BlueprintType)
struct FSubtitleSectionTemplate : public FMovieScenePropertySectionTemplate {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSubtitleTrackSectionParams Data;
    
public:
    SUBTITLETRACK_API FSubtitleSectionTemplate();
};

