#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "EEmotionState.h"
#include "AnimNotifyState_SetTalking.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class SQUANCHMOUTH_API UAnimNotifyState_SetTalking : public UAnimNotifyState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EEmotionState FinalEmotion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EmotionPersistTime;
    
    UAnimNotifyState_SetTalking();
};

