#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GameplayTagContainer.h"
#include "GlobalEventDelegateOneParamDelegate.h"
#include "GlobalEventDelegateDelegate.h"
#include "ORGlobalEventsFunctionLibrary.generated.h"

class UObject;
class UORGlobalEventPayload;

UCLASS(Blueprintable)
class OREGON_API UORGlobalEventsFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UORGlobalEventsFunctionLibrary();
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void RemoveGlobalListenerWithPayload(UObject* WorldContextObject, const FGameplayTag Tag, const FGlobalEventDelegateOneParam& Delegate);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void RemoveGlobalListenerByName(UObject* WorldContextObject, const FGameplayTag Tag, const FName& ReceivingFunctionName);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void RemoveGlobalListenerByDelegate(UObject* WorldContextObject, const FGameplayTag Tag, const FGlobalEventDelegate& Delegate);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void DispatchGlobalEventWithPayload(UObject* WorldContextObject, const FGameplayTag Tag, UORGlobalEventPayload* Payload);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void DispatchGlobalEvent(UObject* WorldContextObject, const FGameplayTag Tag);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void AddGlobalListenerWithPayload(UObject* WorldContextObject, const FGameplayTag Tag, const FGlobalEventDelegateOneParam& Delegate);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void AddGlobalListenerByName(UObject* WorldContextObject, const FGameplayTag Tag, const FName& ReceivingFunctionName);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void AddGlobalListenerByDelegate(UObject* WorldContextObject, const FGameplayTag Tag, const FGlobalEventDelegate& Delegate);
    
};

