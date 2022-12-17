#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "ORStreamingWarpBaseLevelInterface.generated.h"

class AOREncounterManager;

UINTERFACE(Blueprintable, MinimalAPI)
class UORStreamingWarpBaseLevelInterface : public UInterface {
    GENERATED_BODY()
};

class IORStreamingWarpBaseLevelInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    TArray<AOREncounterManager*> GetEncounterManagers();
    
};

