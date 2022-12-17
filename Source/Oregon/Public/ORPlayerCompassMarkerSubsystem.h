#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "ORPlayerCompassMarkerSubsystem.generated.h"

class AActor;
class UORPlayerCompassMarkerComponent;

UCLASS(Blueprintable)
class OREGON_API UORPlayerCompassMarkerSubsystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, Export, Transient)
    TArray<TWeakObjectPtr<UORPlayerCompassMarkerComponent>> ActivePoints;
    
public:
    UORPlayerCompassMarkerSubsystem();
    UFUNCTION(BlueprintCallable)
    void GetPathBetweenActors(AActor* FromActor, AActor* ToActor, TArray<UORPlayerCompassMarkerComponent*>& OutPath, TMap<UORPlayerCompassMarkerComponent*, float>& FromCost);
    
    UFUNCTION(BlueprintCallable)
    AActor* GetNextWaypoint(AActor* FromActor, AActor* ToActor, float& ApproximateDistance);
    
};

