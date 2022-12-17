#pragma once
#include "CoreMinimal.h"
#include "WaveSpeakerData.h"
#include "WavePossessionMapCompleteDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FWavePossessionMapCompleteDelegate, FWaveSpeakerData, WaveSpeakerData);

