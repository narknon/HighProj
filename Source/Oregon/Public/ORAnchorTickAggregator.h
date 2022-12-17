#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "ORAnchorTickAggregator.generated.h"

class AActor;

UCLASS(Blueprintable)
class UORAnchorTickAggregator : public UWorldSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> TrackedAnchors;
    
public:
    UORAnchorTickAggregator();
};

