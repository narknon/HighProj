#pragma once
#include "CoreMinimal.h"
#include "MovieSceneNameableTrack.h"
#include "Compilation/IMovieSceneTrackTemplateProducer.h"
#include "DisableEyeAutomationTrack.generated.h"

class UMovieSceneSection;

UCLASS(Blueprintable)
class DISABLEEYEAUTOMATIONTRACK_API UDisableEyeAutomationTrack : public UMovieSceneNameableTrack, public IMovieSceneTrackTemplateProducer {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UMovieSceneSection*> Sections;
    
public:
    UDisableEyeAutomationTrack();
    
    // Fix for true pure virtual functions not being implemented
};

