#pragma once
#include "CoreMinimal.h"
#include "LookAtTrackSectionParams.h"
#include "Evaluation/MovieScenePropertyTemplate.h"
#include "LookAtSectionTemplate.generated.h"

USTRUCT(BlueprintType)
struct FLookAtSectionTemplate : public FMovieScenePropertySectionTemplate {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLookAtTrackSectionParams Data;
    
public:
    LOOKATTRACK_API FLookAtSectionTemplate();
};

