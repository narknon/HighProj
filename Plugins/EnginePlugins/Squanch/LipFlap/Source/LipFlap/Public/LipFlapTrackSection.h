#pragma once
#include "CoreMinimal.h"
#include "LipFlapTrackSectionParams.h"
#include "MovieSceneSection.h"
#include "LipFlapTrackSection.generated.h"

UCLASS(Blueprintable)
class LIPFLAP_API ULipFlapTrackSection : public UMovieSceneSection {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLipFlapTrackSectionParams Params;
    
    ULipFlapTrackSection();
};

