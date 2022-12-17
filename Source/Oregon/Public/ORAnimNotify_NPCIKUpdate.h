#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "ORAnimNotify_NPCIKUpdate.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class OREGON_API UORAnimNotify_NPCIKUpdate : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIKEnableState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHandIKEnableState;
    
    UORAnimNotify_NPCIKUpdate();
};

