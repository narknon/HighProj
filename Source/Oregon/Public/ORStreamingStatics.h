#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ORStreamingStatics.generated.h"

class UWorld;

UCLASS(Blueprintable)
class OREGON_API UORStreamingStatics : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UORStreamingStatics();
    UFUNCTION(BlueprintCallable)
    static bool BuildRealmReactActors(UWorld* World, bool bOnlyConsiderBuiltHLODs);
    
};

