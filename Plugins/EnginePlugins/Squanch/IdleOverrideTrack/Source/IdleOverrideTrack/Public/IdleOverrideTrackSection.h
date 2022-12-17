#pragma once
#include "CoreMinimal.h"
#include "IdleOverrideTrackSectionParams.h"
#include "MovieSceneSection.h"
#include "IdleOverrideTrackSection.generated.h"

UCLASS(Blueprintable)
class IDLEOVERRIDETRACK_API UIdleOverrideTrackSection : public UMovieSceneSection {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIdleOverrideTrackSectionParams Params;
    
    UIdleOverrideTrackSection();
};

