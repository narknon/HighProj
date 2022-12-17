#pragma once
#include "CoreMinimal.h"
#include "AimAssistTargetInfo.generated.h"

class AActor;
class UORTargetableComponent;

USTRUCT(BlueprintType)
struct OREGON_API FAimAssistTargetInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TWeakObjectPtr<AActor> AimAssistTarget;
    
    UPROPERTY(EditAnywhere, Export)
    TWeakObjectPtr<UORTargetableComponent> AimAssistTargetableComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInLOS;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StartOfLOSTime;
    
    FAimAssistTargetInfo();
};

