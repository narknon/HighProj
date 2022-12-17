#pragma once
#include "CoreMinimal.h"
#include "MercunaPath.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Components/SplineComponent.h"
#include "MercunaSmoothPath.generated.h"

UCLASS(Blueprintable)
class MERCUNA_API UMercunaSmoothPath : public UMercunaPath {
    GENERATED_BODY()
public:
    UMercunaSmoothPath();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetTangent(const float Length) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FSplinePoint> GetSplinePoints(const FTransform& RelativeTo) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetPosition(const float Length) const;
    
};

