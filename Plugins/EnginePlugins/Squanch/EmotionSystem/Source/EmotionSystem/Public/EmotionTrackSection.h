#pragma once
#include "CoreMinimal.h"
#include "MovieSceneSection.h"
#include "EmotionTrackSectionParams.h"
#include "EmotionTrackSection.generated.h"

UCLASS(Blueprintable)
class EMOTIONSYSTEM_API UEmotionTrackSection : public UMovieSceneSection {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEmotionTrackSectionParams Params;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 InitialFrameStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 InitialFrameEnd;
    
    UEmotionTrackSection();
};

