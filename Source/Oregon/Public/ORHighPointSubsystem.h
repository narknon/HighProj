#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "UObject/NoExportTypes.h"
#include "ORHighPointSubsystem.generated.h"

class UORHighPointMarkerComponent;

UCLASS(Blueprintable)
class OREGON_API UORHighPointSubsystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
    UORHighPointSubsystem();
    UFUNCTION(BlueprintCallable)
    UORHighPointMarkerComponent* FindFurthestHighPoint(FVector StartPoint, float MinDistance, float MaxDistance);
    
    UFUNCTION(BlueprintCallable)
    UORHighPointMarkerComponent* FindClosestHighPoint(FVector StartPoint, float MinDistance, float MaxDistance);
    
};

