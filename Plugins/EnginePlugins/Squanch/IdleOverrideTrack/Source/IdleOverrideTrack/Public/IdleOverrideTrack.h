#pragma once
#include "CoreMinimal.h"
#include "MovieSceneNameableTrack.h"
#include "Compilation/IMovieSceneTrackTemplateProducer.h"
#include "IdleOverrideTrack.generated.h"

class UMovieSceneSection;

UCLASS(Blueprintable)
class IDLEOVERRIDETRACK_API UIdleOverrideTrack : public UMovieSceneNameableTrack, public IMovieSceneTrackTemplateProducer {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UMovieSceneSection*> Sections;
    
public:
    UIdleOverrideTrack();
    
    // Fix for true pure virtual functions not being implemented
};

