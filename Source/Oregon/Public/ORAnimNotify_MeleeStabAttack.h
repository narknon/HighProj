#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "Engine/EngineTypes.h"
#include "ORAnimNotify_MeleeStabAttack.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class OREGON_API UORAnimNotify_MeleeStabAttack : public UAnimNotify {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ECollisionChannel> TraceChannel;
    
public:
    UORAnimNotify_MeleeStabAttack();
};

