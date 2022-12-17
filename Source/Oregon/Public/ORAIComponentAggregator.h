#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "ORAIComponentAggregator.generated.h"

class UORAIPerceptionComponent;
class UPathFollowingComponent;

UCLASS(Blueprintable)
class UORAIComponentAggregator : public UWorldSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UPathFollowingComponent*> PathFollowers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UORAIPerceptionComponent*> PerceptionComponents;
    
public:
    UORAIComponentAggregator();
};

