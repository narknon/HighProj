#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "AttackTokenHandle.h"
#include "ORAttackTokenLibrary.generated.h"

UCLASS(Blueprintable)
class UORAttackTokenLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UORAttackTokenLibrary();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsValidAttackTokenHandle(FAttackTokenHandle Handle);
    
};

