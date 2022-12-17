#pragma once
#include "CoreMinimal.h"
#include "Evaluation/MovieSceneEvalTemplate.h"
#include "MovieSceneSection.h"
#include "AnimMontageSectionParams.h"
#include "AnimMontageSectionTemplate.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct FAnimMontageSectionTemplate : public FMovieSceneEvalTemplate {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAnimMontageSectionParams Data;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneEasingSettings Easing;
    
private:
    UPROPERTY(EditAnywhere)
    TArray<TWeakObjectPtr<UObject>> BoundObjects;
    
public:
    ANIMMONTAGETRACK_API FAnimMontageSectionTemplate();
};

