#pragma once
#include "CoreMinimal.h"
#include "LoadMovieDataPinDelegate.generated.h"

class UAkAudioEvent;
class UBinkMediaPlayer;
class UMaterialInterface;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_SixParams(FLoadMovieDataPin, UBinkMediaPlayer*, BinkPlayer, UMaterialInterface*, ScreenMaterial, const TArray<UAkAudioEvent*>&, PlayEvents, const TArray<UAkAudioEvent*>&, PauseEvents, const TArray<UAkAudioEvent*>&, ResumeEvents, const TArray<UAkAudioEvent*>&, StopEvents);

