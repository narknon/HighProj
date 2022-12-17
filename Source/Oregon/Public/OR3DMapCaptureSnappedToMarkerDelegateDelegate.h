#pragma once
#include "CoreMinimal.h"
#include "OR3DMapCaptureSnappedToMarkerDelegateDelegate.generated.h"

class AOR3DMapMarker;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOR3DMapCaptureSnappedToMarkerDelegate, AOR3DMapMarker*, SnappedMarker);

