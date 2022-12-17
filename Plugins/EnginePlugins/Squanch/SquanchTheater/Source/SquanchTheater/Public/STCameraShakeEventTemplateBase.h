#pragma once
#include "CoreMinimal.h"
#include "MovieSceneObjectBindingID.h"
#include "Evaluation/MovieSceneEvalTemplate.h"
#include "STCameraShakeEventTemplateBase.generated.h"

USTRUCT(BlueprintType)
struct FSTCameraShakeEventTemplateBase : public FMovieSceneEvalTemplate {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMovieSceneObjectBindingID> EventReceivers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bFireEventsWhenForwards: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bFireEventsWhenBackwards: 1;
    
    SQUANCHTHEATER_API FSTCameraShakeEventTemplateBase();
};

