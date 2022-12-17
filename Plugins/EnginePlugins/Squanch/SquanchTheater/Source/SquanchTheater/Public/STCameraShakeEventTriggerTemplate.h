#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Channels/MovieSceneEvent.h"
#include "STCameraShakeEventTemplateBase.h"
#include "STCameraShakeEventTriggerTemplate.generated.h"

USTRUCT(BlueprintType)
struct FSTCameraShakeEventTriggerTemplate : public FSTCameraShakeEventTemplateBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFrameNumber> EventTimes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMovieSceneEventPtrs> Events;
    
    SQUANCHTHEATER_API FSTCameraShakeEventTriggerTemplate();
};

