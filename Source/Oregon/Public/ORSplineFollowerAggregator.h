#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "ORSplineFollowerAggregator.generated.h"

class UORSplineFollowerComponent;

UCLASS(Blueprintable)
class UORSplineFollowerAggregator : public UWorldSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UORSplineFollowerComponent*> TrackedComponents;
    
public:
    UORSplineFollowerAggregator();
};

