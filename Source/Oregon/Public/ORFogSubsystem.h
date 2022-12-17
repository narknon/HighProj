#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "UObject/NoExportTypes.h"
#include "ORFogSubsystem.generated.h"

UCLASS(Blueprintable)
class OREGON_API UORFogSubsystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
    UORFogSubsystem();
    UFUNCTION(BlueprintCallable)
    void SetDistance(float NewDistance);
    
    UFUNCTION(BlueprintCallable)
    void SetColor(const FLinearColor& Color);
    
    UFUNCTION(BlueprintCallable)
    void LerpToDistance(float NewDistance, float OverTime);
    
    UFUNCTION(BlueprintCallable)
    void LerpToColor(const FLinearColor& Color, float OverTime);
    
    UFUNCTION(BlueprintCallable)
    void Clear();
    
};

