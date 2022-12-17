#pragma once
#include "CoreMinimal.h"
#include "Evaluation/MovieSceneEvalTemplate.h"
#include "STIntervalSectionData.h"
#include "STIntervalSectionTemplate.generated.h"

USTRUCT(BlueprintType)
struct FSTIntervalSectionTemplate : public FMovieSceneEvalTemplate {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSTIntervalSectionData Data;
    
    SQUANCHTHEATER_API FSTIntervalSectionTemplate();
};

