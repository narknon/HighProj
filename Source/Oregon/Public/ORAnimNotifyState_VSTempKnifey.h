#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "ORGlobalEventListener.h"
#include "ORAnimNotifyState_VSTempKnifey.generated.h"

class AORKnifeyDummyNPC;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class OREGON_API UORAnimNotifyState_VSTempKnifey : public UAnimNotifyState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHideKnifeyOnEnd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEndMeleeOnEnd;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AttachLocation;
    
    UPROPERTY(EditAnywhere)
    TWeakObjectPtr<AORKnifeyDummyNPC> KnifeyActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FORGlobalEventListener MeleeEventListener;
    
public:
    UORAnimNotifyState_VSTempKnifey();
};

