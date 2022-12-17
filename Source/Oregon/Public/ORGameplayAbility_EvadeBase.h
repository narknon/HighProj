#pragma once
#include "CoreMinimal.h"
#include "ORGameplayAbility.h"
#include "UObject/NoExportTypes.h"
#include "ORGameplayAbility_EvadeBase.generated.h"

UCLASS(Blueprintable)
class OREGON_API UORGameplayAbility_EvadeBase : public UORGameplayAbility {
    GENERATED_BODY()
public:
    UORGameplayAbility_EvadeBase();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ChooseEvasionPointLeftRight(float MaxDistance, FVector& OutLocation);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ChooseEvasionPoint(const TArray<FVector>& EvasionDirections, float MaxDistance, FVector& OutLocation);
    
};

