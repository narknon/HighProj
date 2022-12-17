#include "Mercuna3DMoveToProxy.h"

class UObject;
class AActor;
class APawn;
class UMercuna3DMoveToProxy;

void UMercuna3DMoveToProxy::OnMoveComplete(FAIRequestID RequestID, TEnumAsByte<EMercunaMoveResult::Type> Result) {
}

UMercuna3DMoveToProxy* UMercuna3DMoveToProxy::MoveToLocations(UObject* WorldContextObject, APawn* Pawn, const TArray<FVector>& Destinations, float EndDistance, float Speed, bool UsePartialPath) {
    return NULL;
}

UMercuna3DMoveToProxy* UMercuna3DMoveToProxy::MoveToLocation(UObject* WorldContextObject, APawn* Pawn, const FVector& Destination, float EndDistance, float Speed, bool UsePartialPath) {
    return NULL;
}

UMercuna3DMoveToProxy* UMercuna3DMoveToProxy::MoveToActor(UObject* WorldContextObject, APawn* Pawn, AActor* Actor, float EndDistance, float Speed, bool UsePartialPath) {
    return NULL;
}

UMercuna3DMoveToProxy::UMercuna3DMoveToProxy() {
}

