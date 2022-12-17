#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "ORGravityFuckeryAggregator.generated.h"

class UORGravityFuckeryComponent;

UCLASS(Blueprintable)
class UORGravityFuckeryAggregator : public UWorldSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UORGravityFuckeryComponent*> TrackedComponents;
    
public:
    UORGravityFuckeryAggregator();
};

