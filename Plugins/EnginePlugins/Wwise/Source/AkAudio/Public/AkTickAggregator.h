#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "AkTickAggregator.generated.h"

class UActorComponent;

UCLASS(Blueprintable)
class AKAUDIO_API UAkTickAggregator : public UWorldSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UActorComponent*> TrackedComponents;
    
public:
    UAkTickAggregator();
};

