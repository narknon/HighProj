#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "AnimNotifyState_IgnoreEmotion.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class EMOTIONSYSTEM_API UAnimNotifyState_IgnoreEmotion : public UAnimNotifyState {
    GENERATED_BODY()
public:
    UAnimNotifyState_IgnoreEmotion();
};

