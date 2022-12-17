#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Curves/CurveFloat.h"
#include "UtilityConsideration.generated.h"

class UUtilityInput;

UCLASS(Blueprintable, DefaultToInstanced, EditInlineNew)
class OREGON_API UUtilityConsideration : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Description;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, NoClear, meta=(AllowPrivateAccess=true))
    UUtilityInput* ConsiderationInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRuntimeFloatCurve ResponseCurve;
    
    UUtilityConsideration();
};

