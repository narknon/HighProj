#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "ORAnimNotifyState_BlendToPhysics.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class OREGON_API UORAnimNotifyState_BlendToPhysics : public UAnimNotifyState {
    GENERATED_BODY()
public:
    UORAnimNotifyState_BlendToPhysics();
};

