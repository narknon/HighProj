#include "ORSocketReservationComponent.h"

class AActor;

FORSocketData UORSocketReservationComponent::ReserveFromPriorityList(const FGameplayTag SocketType) {
    return FORSocketData{};
}

FORSocketData UORSocketReservationComponent::ReserveClosest(const FVector& Point, const FGameplayTag SocketType) {
    return FORSocketData{};
}

FORSocketData UORSocketReservationComponent::ReserveAndAttachFromPriorityList(AActor* Actor, const FGameplayTag SocketType) {
    return FORSocketData{};
}

FORSocketData UORSocketReservationComponent::ReserveAndAttachClosest(const FVector& Point, AActor* Actor, const FGameplayTag SocketType) {
    return FORSocketData{};
}

bool UORSocketReservationComponent::ReserveAndAttach(const FORSocketData& SocketData, AActor* Actor) {
    return false;
}

bool UORSocketReservationComponent::Reserve(const FORSocketData& SocketData) {
    return false;
}

bool UORSocketReservationComponent::IsSocketReserved(const FORSocketData& SocketData) const {
    return false;
}

bool UORSocketReservationComponent::HasSocketsAvailable() {
    return false;
}

int32 UORSocketReservationComponent::GetSocketsAvailableCount(const FGameplayTag SocketType) const {
    return 0;
}

TArray<FORSocketData> UORSocketReservationComponent::GetSocketData(const FGameplayTag SocketType) const {
    return TArray<FORSocketData>();
}

int32 UORSocketReservationComponent::GetMaxSocketsCount(const FGameplayTag SocketType) const {
    return 0;
}

bool UORSocketReservationComponent::Free(const FORSocketData& SocketData) {
    return false;
}

void UORSocketReservationComponent::FireSocketReservedEvent() {
}

UORSocketReservationComponent::UORSocketReservationComponent() {
}

