#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ScriptComponentFunctionLibrary.generated.h"

class UObject;
class UORScriptComponent;
class UORScriptComponentOwner;
class IORScriptComponentOwner;

UCLASS(Blueprintable)
class OREGON_API UScriptComponentFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UScriptComponentFunctionLibrary();
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void RemoveScriptComponent(UObject* WorldContextObject, TScriptInterface<IORScriptComponentOwner> Owner, UORScriptComponent* ScriptComponent);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UORScriptComponent* GetScriptComponentOfType(UObject* WorldContextObject, TScriptInterface<IORScriptComponentOwner> Owner, TSubclassOf<UORScriptComponent> Type);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UORScriptComponent* CreateAndAddScriptComponentOfType(UObject* WorldContextObject, TScriptInterface<IORScriptComponentOwner> Owner, TSubclassOf<UORScriptComponent> Type);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void AddScriptComponent(UObject* WorldContextObject, TScriptInterface<IORScriptComponentOwner> Owner, UORScriptComponent* ScriptComponent);
    
};

