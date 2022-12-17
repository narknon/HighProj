#pragma once
#include "CoreMinimal.h"
#include "OR1PAnimInstance.h"
#include "ORLeftArmAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class OREGON_API UORLeftArmAnimInstance : public UOR1PAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlayerSpeedInterp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlayerSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsKnifeyShown;
    
    UORLeftArmAnimInstance();
};

