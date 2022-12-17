#pragma once
#include "CoreMinimal.h"
#include "MovieSceneSection.h"
#include "SquanchMouthAnimTrackSectionParams.h"
#include "SquanchMouthAnimTrackSection.generated.h"

UCLASS(Blueprintable)
class SQUANCHMOUTH_API USquanchMouthAnimTrackSection : public UMovieSceneSection {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSquanchMouthAnimTrackSectionParams Params;
    
    USquanchMouthAnimTrackSection();
};

