#pragma once
#include "CoreMinimal.h"
#include "LipFlapTrackSectionParams.h"
#include "Evaluation/MovieScenePropertyTemplate.h"
#include "LipFlapSectionTemplate.generated.h"

USTRUCT(BlueprintType)
struct FLipFlapSectionTemplate : public FMovieScenePropertySectionTemplate {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLipFlapTrackSectionParams Data;
    
public:
    LIPFLAP_API FLipFlapSectionTemplate();
};

