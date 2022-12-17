#pragma once
#include "CoreMinimal.h"
#include "LookAtTrackSectionParams.h"
#include "MovieSceneSection.h"
#include "LookAtTrackSection.generated.h"

UCLASS(Blueprintable)
class LOOKATTRACK_API ULookAtTrackSection : public UMovieSceneSection {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLookAtTrackSectionParams Params;
    
    ULookAtTrackSection();
};

