#pragma once
#include "CoreMinimal.h"
#include "TargetData.generated.h"

class AActor;
class UORTargetableComponent;

USTRUCT(BlueprintType)
struct OREGON_API FTargetData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TWeakObjectPtr<AActor> TargetActor;
    
    UPROPERTY(EditAnywhere, Export)
    TWeakObjectPtr<UORTargetableComponent> TargetableComponent;
    
    FTargetData();
};

