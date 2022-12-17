#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "SQDismemberSubsystem.generated.h"

class AActor;

UCLASS(Blueprintable)
class SQUANCHDISMEMBER_API USQDismemberSubsystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
    USQDismemberSubsystem();
    UFUNCTION(BlueprintCallable)
    void RegisterSpawnedGib(AActor* Gib);
    
    UFUNCTION(BlueprintCallable)
    void OnGibDestroyed(AActor* DestroyedGib);
    
    UFUNCTION(BlueprintCallable)
    bool CanSpawnNewGib();
    
};

