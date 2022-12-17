#include "ORSyncedMovieSubsystem.h"

class AActor;
class UAkAudioEvent;
class UAkCallbackInfo;
class UBinkMediaPlayer;
class UDataTable;

bool UORSyncedMovieSubsystem::StopMovie(FGameplayTag Tag) {
    return false;
}

void UORSyncedMovieSubsystem::StopAllMovies() {
}

bool UORSyncedMovieSubsystem::StartMovie(FGameplayTag Tag, AActor* MovieSourceActor, UBinkMediaPlayer* Player, FString& MovieURL, TArray<UAkAudioEvent*> AudioTrackPlayEvents, TArray<UAkAudioEvent*> AudioTrackPauseEvents, TArray<UAkAudioEvent*> AudioTrackResumeEvents, TArray<UAkAudioEvent*> AudioTrackStopEvents, FGameplayTag LinkedPlayer, UDataTable* LocalizationTable, float StartTime) {
    return false;
}

void UORSyncedMovieSubsystem::SetMovieProgressByTime(FGameplayTag Tag, float Time) {
}

void UORSyncedMovieSubsystem::SetMovieProgressByPercent(FGameplayTag Tag, float Percent) {
}

bool UORSyncedMovieSubsystem::ResumeMovie(FGameplayTag Tag) {
    return false;
}

void UORSyncedMovieSubsystem::PauseStateChanged(bool bNewState) {
}

bool UORSyncedMovieSubsystem::PauseMovie(FGameplayTag Tag) {
    return false;
}

void UORSyncedMovieSubsystem::MovieComplete(UBinkMediaPlayer* Player) {
}

float UORSyncedMovieSubsystem::BP_GetMovieProgress(FGameplayTag Tag) {
    return 0.0f;
}

float UORSyncedMovieSubsystem::BP_GetMovieDuration(FGameplayTag Tag) {
    return 0.0f;
}

void UORSyncedMovieSubsystem::AkMarkerCallback(EAkCallbackType Type, UAkCallbackInfo* Info) {
}

UORSyncedMovieSubsystem::UORSyncedMovieSubsystem() {
}

