#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "ORAnimInstance_Hookbug.generated.h"

UCLASS(Blueprintable, NonTransient)
class OREGON_API UORAnimInstance_Hookbug : public UAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AnimForwardSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AnimSideSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTetherBlocked;
    
    UORAnimInstance_Hookbug();
};

