#pragma once
#include "CoreMinimal.h"
#include "MovieSceneNameableTrack.h"
#include "Compilation/IMovieSceneTrackTemplateProducer.h"
#include "AnimMontageTrack.generated.h"

class UMovieSceneSection;

UCLASS(Blueprintable)
class ANIMMONTAGETRACK_API UAnimMontageTrack : public UMovieSceneNameableTrack/*, public IMovieSceneTrackTemplateProducer*/ {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UMovieSceneSection*> Sections;
    
public:
    UAnimMontageTrack();
    
    // Fix for true pure virtual functions not being implemented
};

