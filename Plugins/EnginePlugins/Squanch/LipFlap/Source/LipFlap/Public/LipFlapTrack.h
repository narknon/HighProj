#pragma once
#include "CoreMinimal.h"
#include "MovieSceneNameableTrack.h"
#include "Compilation/IMovieSceneTrackTemplateProducer.h"
#include "LipFlapTrack.generated.h"

class UMovieSceneSection;

UCLASS(Blueprintable)
class LIPFLAP_API ULipFlapTrack : public UMovieSceneNameableTrack, public IMovieSceneTrackTemplateProducer {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UMovieSceneSection*> Sections;
    
public:
    ULipFlapTrack();
    
    // Fix for true pure virtual functions not being implemented
};

