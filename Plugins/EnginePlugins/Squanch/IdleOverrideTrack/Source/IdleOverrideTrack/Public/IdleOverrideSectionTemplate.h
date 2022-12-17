#pragma once
#include "CoreMinimal.h"
#include "IdleOverrideTrackSectionParams.h"
#include "Evaluation/MovieScenePropertyTemplate.h"
#include "IdleOverrideSectionTemplate.generated.h"

USTRUCT(BlueprintType)
struct FIdleOverrideSectionTemplate : public FMovieScenePropertySectionTemplate {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIdleOverrideTrackSectionParams Data;
    
public:
    IDLEOVERRIDETRACK_API FIdleOverrideSectionTemplate();
};

