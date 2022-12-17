#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "MercunaBlueprintLibrary.generated.h"

class AActor;

UCLASS(Blueprintable)
class MERCUNA_API UMercunaBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UMercunaBlueprintLibrary();
    UFUNCTION(BlueprintCallable)
    static void SetDebugActor(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    static void ClearDebugActor();
    
};

