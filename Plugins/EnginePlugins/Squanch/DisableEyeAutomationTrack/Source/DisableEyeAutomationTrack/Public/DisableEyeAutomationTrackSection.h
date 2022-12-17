#pragma once
#include "CoreMinimal.h"
#include "DisableEyeAutomationTrackSectionParams.h"
#include "MovieSceneSection.h"
#include "DisableEyeAutomationTrackSection.generated.h"

UCLASS(Blueprintable)
class DISABLEEYEAUTOMATIONTRACK_API UDisableEyeAutomationTrackSection : public UMovieSceneSection {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDisableEyeAutomationTrackSectionParams Params;
    
    UDisableEyeAutomationTrackSection();
};

