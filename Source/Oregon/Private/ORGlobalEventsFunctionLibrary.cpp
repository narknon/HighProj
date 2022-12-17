#include "ORGlobalEventsFunctionLibrary.h"

class UObject;
class UORGlobalEventPayload;

void UORGlobalEventsFunctionLibrary::RemoveGlobalListenerWithPayload(UObject* WorldContextObject, const FGameplayTag Tag, const FGlobalEventDelegateOneParam& Delegate) {
}

void UORGlobalEventsFunctionLibrary::RemoveGlobalListenerByName(UObject* WorldContextObject, const FGameplayTag Tag, const FName& ReceivingFunctionName) {
}

void UORGlobalEventsFunctionLibrary::RemoveGlobalListenerByDelegate(UObject* WorldContextObject, const FGameplayTag Tag, const FGlobalEventDelegate& Delegate) {
}

void UORGlobalEventsFunctionLibrary::DispatchGlobalEventWithPayload(UObject* WorldContextObject, const FGameplayTag Tag, UORGlobalEventPayload* Payload) {
}

void UORGlobalEventsFunctionLibrary::DispatchGlobalEvent(UObject* WorldContextObject, const FGameplayTag Tag) {
}

void UORGlobalEventsFunctionLibrary::AddGlobalListenerWithPayload(UObject* WorldContextObject, const FGameplayTag Tag, const FGlobalEventDelegateOneParam& Delegate) {
}

void UORGlobalEventsFunctionLibrary::AddGlobalListenerByName(UObject* WorldContextObject, const FGameplayTag Tag, const FName& ReceivingFunctionName) {
}

void UORGlobalEventsFunctionLibrary::AddGlobalListenerByDelegate(UObject* WorldContextObject, const FGameplayTag Tag, const FGlobalEventDelegate& Delegate) {
}

UORGlobalEventsFunctionLibrary::UORGlobalEventsFunctionLibrary() {
}

