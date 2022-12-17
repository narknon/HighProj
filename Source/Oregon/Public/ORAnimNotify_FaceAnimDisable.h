#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "ORAnimNotify_FaceAnimDisable.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class OREGON_API UORAnimNotify_FaceAnimDisable : public UAnimNotifyState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IgnoreIfTalking;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DisableLipsync;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DisableLookAt;
    
    UORAnimNotify_FaceAnimDisable();
};

