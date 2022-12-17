#pragma once
#include "CoreMinimal.h"
#include "ORTrapTemplateData.generated.h"

class AORTrapTriggerVolume;

USTRUCT(BlueprintType)
struct FORTrapTemplateData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TrapDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AORTrapTriggerVolume* Trap;
    
    OREGON_API FORTrapTemplateData();
};

