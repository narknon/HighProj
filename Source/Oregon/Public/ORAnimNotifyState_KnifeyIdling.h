#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "ORAnimNotifyState_KnifeyIdling.generated.h"

class UOR1PAnimInstance;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class UORAnimNotifyState_KnifeyIdling : public UAnimNotifyState {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UOR1PAnimInstance* CachedAnimInst;
    
public:
    UORAnimNotifyState_KnifeyIdling();
};

