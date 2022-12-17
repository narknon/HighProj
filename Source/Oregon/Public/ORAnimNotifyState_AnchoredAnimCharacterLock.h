#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "ORAnimNotifyState_AnchoredAnimCharacterLock.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class OREGON_API UORAnimNotifyState_AnchoredAnimCharacterLock : public UAnimNotifyState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAffectBumpReacts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAffectHitReacts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAffectPlayerNoticeState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAffectPlayerInteractState;
    
    UORAnimNotifyState_AnchoredAnimCharacterLock();
};

