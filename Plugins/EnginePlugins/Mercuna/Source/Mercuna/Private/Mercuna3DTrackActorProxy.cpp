#include "Mercuna3DTrackActorProxy.h"

class UObject;
class AActor;
class APawn;
class UMercuna3DTrackActorProxy;

UMercuna3DTrackActorProxy* UMercuna3DTrackActorProxy::TrackActor(UObject* WorldContextObject, APawn* Pawn, AActor* Actor, float Distance, float Speed) {
    return NULL;
}

void UMercuna3DTrackActorProxy::OnMoveComplete(FAIRequestID RequestID, TEnumAsByte<EMercunaMoveResult::Type> Result) {
}

UMercuna3DTrackActorProxy::UMercuna3DTrackActorProxy() {
}

