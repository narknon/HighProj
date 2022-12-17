#include "ScriptComponentFunctionLibrary.h"
#include "Templates/SubclassOf.h"

class UObject;
class UORScriptComponent;
class UORScriptComponentOwner;
class IORScriptComponentOwner;

void UScriptComponentFunctionLibrary::RemoveScriptComponent(UObject* WorldContextObject, TScriptInterface<IORScriptComponentOwner> Owner, UORScriptComponent* ScriptComponent) {
}

UORScriptComponent* UScriptComponentFunctionLibrary::GetScriptComponentOfType(UObject* WorldContextObject, TScriptInterface<IORScriptComponentOwner> Owner, TSubclassOf<UORScriptComponent> Type) {
    return NULL;
}

UORScriptComponent* UScriptComponentFunctionLibrary::CreateAndAddScriptComponentOfType(UObject* WorldContextObject, TScriptInterface<IORScriptComponentOwner> Owner, TSubclassOf<UORScriptComponent> Type) {
    return NULL;
}

void UScriptComponentFunctionLibrary::AddScriptComponent(UObject* WorldContextObject, TScriptInterface<IORScriptComponentOwner> Owner, UORScriptComponent* ScriptComponent) {
}

UScriptComponentFunctionLibrary::UScriptComponentFunctionLibrary() {
}

