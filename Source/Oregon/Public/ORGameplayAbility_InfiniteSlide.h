#pragma once
#include "CoreMinimal.h"
#include "ORGameplayAbility.h"
#include "ORGameplayAbility_InfiniteSlide.generated.h"

UCLASS(Blueprintable)
class OREGON_API UORGameplayAbility_InfiniteSlide : public UORGameplayAbility {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SlideSpeed;
    
public:
    UORGameplayAbility_InfiniteSlide();
};

