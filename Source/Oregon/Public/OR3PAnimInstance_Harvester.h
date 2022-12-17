#pragma once
#include "CoreMinimal.h"
#include "OR3PAnimInstance.h"
#include "OR3PAnimInstance_Harvester.generated.h"

UCLASS(Blueprintable, NonTransient)
class OREGON_API UOR3PAnimInstance_Harvester : public UOR3PAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTriggerPeek;
    
public:
    UOR3PAnimInstance_Harvester();
};

