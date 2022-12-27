#pragma once
#include "CoreMinimal.h"
#include "MovieSceneNameableTrack.h"
#include "Compilation/IMovieSceneTrackTemplateProducer.h"
#include "SquanchMouthAnimTrack.generated.h"

class UMovieSceneSection;

UCLASS(Blueprintable)
class SQUANCHMOUTH_API USquanchMouthAnimTrack : public UMovieSceneNameableTrack/*, public IMovieSceneTrackTemplateProducer*/ {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UMovieSceneSection*> Sections;
    
public:
    USquanchMouthAnimTrack();
    
    // Fix for true pure virtual functions not being implemented
};

