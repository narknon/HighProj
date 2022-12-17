#pragma once
#include "CoreMinimal.h"
#include "Evaluation/MovieScenePropertyTemplate.h"
#include "SquanchMouthAnimTrackSectionParams.h"
#include "SquanchMouthAnimSectionTemplate.generated.h"

USTRUCT(BlueprintType)
struct FSquanchMouthAnimSectionTemplate : public FMovieScenePropertySectionTemplate {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSquanchMouthAnimTrackSectionParams Data;
    
public:
    SQUANCHMOUTH_API FSquanchMouthAnimSectionTemplate();
};

