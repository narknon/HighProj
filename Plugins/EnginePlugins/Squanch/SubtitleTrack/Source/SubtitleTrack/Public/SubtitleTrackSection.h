#pragma once
#include "CoreMinimal.h"
#include "MovieSceneSection.h"
#include "SubtitleTrackSectionParams.h"
#include "SubtitleTrackSection.generated.h"

UCLASS(Blueprintable)
class SUBTITLETRACK_API USubtitleTrackSection : public UMovieSceneSection {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSubtitleTrackSectionParams Params;
    
    USubtitleTrackSection();
};

