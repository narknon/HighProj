#include "ORLatentAction_LoadMovieData.h"

class UObject;
class UAkAudioEvent;
class UBinkMediaPlayer;
class UORLatentAction_LoadMovieData;
class UMaterialInterface;

void UORLatentAction_LoadMovieData::Tick() {
}

UORLatentAction_LoadMovieData* UORLatentAction_LoadMovieData::LoadMovieData(UObject* WorldContextObj, TSoftObjectPtr<UBinkMediaPlayer> BinkPlayerRef, TSoftObjectPtr<UMaterialInterface> ScreenMaterialRef, TArray<TSoftObjectPtr<UAkAudioEvent>> PlayEventRefs, TArray<TSoftObjectPtr<UAkAudioEvent>> PauseEventRefs, TArray<TSoftObjectPtr<UAkAudioEvent>> ResumeEventRefs, TArray<TSoftObjectPtr<UAkAudioEvent>> StopEventsRefs) {
    return NULL;
}

UORLatentAction_LoadMovieData::UORLatentAction_LoadMovieData() {
}

