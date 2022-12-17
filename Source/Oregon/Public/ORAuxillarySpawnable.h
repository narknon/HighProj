#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ORAuxillarySpawnable.generated.h"

UCLASS(Blueprintable)
class OREGON_API AORAuxillarySpawnable : public AActor {
    GENERATED_BODY()
public:
    AORAuxillarySpawnable();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnWaveAdvanced(int32 NewWaveIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnEncounterEnd();
    
};

