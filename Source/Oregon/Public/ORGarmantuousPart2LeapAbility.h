#pragma once
#include "CoreMinimal.h"
#include "ORGameplayAbility.h"
#include "UObject/NoExportTypes.h"
#include "ORGarmantuousPart2LeapAbility.generated.h"

UCLASS(Blueprintable)
class OREGON_API UORGarmantuousPart2LeapAbility : public UORGameplayAbility {
    GENERATED_BODY()
public:
    UORGarmantuousPart2LeapAbility();
    UFUNCTION(BlueprintCallable)
    FVector GetLeapLocation();
    
};

