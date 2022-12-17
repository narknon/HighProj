#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "UObject/NoExportTypes.h"
#include "ORMathLibrary.generated.h"

UCLASS(Blueprintable)
class OREGON_API UORMathLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UORMathLibrary();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FRotator RandomRotatorWithHalfAngles(float PitchHalfAngleDeg, float YawHalfAngleDeg, float RollHalfAngleDeg);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float NormalizeToRangeClamped(float Value, float RangeMin, float RangeMax);
    
};

