#pragma once
#include "CoreMinimal.h"
#include "DisableEyeAutomationTrackSectionParams.h"
#include "Evaluation/MovieScenePropertyTemplate.h"
#include "DisableEyeAutomationSectionTemplate.generated.h"

USTRUCT(BlueprintType)
struct FDisableEyeAutomationSectionTemplate : public FMovieScenePropertySectionTemplate {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDisableEyeAutomationTrackSectionParams Data;
    
public:
    DISABLEEYEAUTOMATIONTRACK_API FDisableEyeAutomationSectionTemplate();
};

