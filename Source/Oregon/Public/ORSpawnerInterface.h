#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "UObject/Interface.h"
#include "OREnemySpawningData.h"
#include "ORSpawnerInterface.generated.h"

class AActor;

UINTERFACE(Blueprintable)
class UORSpawnerInterface : public UInterface {
    GENERATED_BODY()
};

class IORSpawnerInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void StopSpawningSequence();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ResetSpawner();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ProcessActorForSpawning(TSubclassOf<AActor> ActorClass, const float Delay, const FOREnemySpawningData& SpawningData);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BeginSpawningSequence();
    
};

