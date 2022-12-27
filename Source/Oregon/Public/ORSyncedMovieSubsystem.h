#pragma once
#include "CoreMinimal.h"
#include "AkGameplayTypes.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "SyncedMovieData.h"
#include "GameplayTagContainer.h"
#include "MarkerTriggeredDelegateDelegate.h"
#include "ORSyncedMovieSubsystem.generated.h"

class AActor;
class UAkAudioEvent;
class UAkCallbackInfo;
class UBinkMediaPlayer;
class UDataTable;

UCLASS(Blueprintable)
class OREGON_API UORSyncedMovieSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FSyncedMovieData> CurrentMovies;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMarkerTriggeredDelegate OnMarkerTriggered;
    
    UPROPERTY(EditAnywhere)
    TWeakObjectPtr<AActor> LastSubtitleSourceActor;
    
public:
    UORSyncedMovieSubsystem();
    UFUNCTION(BlueprintCallable)
    bool StopMovie(FGameplayTag Tag);
    
protected:
    UFUNCTION(BlueprintCallable)
    void StopAllMovies();
    
public:
    UFUNCTION(BlueprintCallable)
    bool StartMovie(FGameplayTag Tag, AActor* MovieSourceActor, UBinkMediaPlayer* Player, UPARAM(Ref) FString& MovieURL, TArray<UAkAudioEvent*> AudioTrackPlayEvents, TArray<UAkAudioEvent*> AudioTrackPauseEvents, TArray<UAkAudioEvent*> AudioTrackResumeEvents, TArray<UAkAudioEvent*> AudioTrackStopEvents, FGameplayTag LinkedPlayer, UDataTable* LocalizationTable, float StartTime);
    
    UFUNCTION(BlueprintCallable)
    void SetMovieProgressByTime(FGameplayTag Tag, float Time);
    
    UFUNCTION(BlueprintCallable)
    void SetMovieProgressByPercent(FGameplayTag Tag, float Percent);
    
    UFUNCTION(BlueprintCallable)
    bool ResumeMovie(FGameplayTag Tag);
    
protected:
    UFUNCTION(BlueprintCallable)
    void PauseStateChanged(bool bNewState);
    
public:
    UFUNCTION(BlueprintCallable)
    bool PauseMovie(FGameplayTag Tag);
    
protected:
    UFUNCTION(BlueprintCallable)
    void MovieComplete(UBinkMediaPlayer* Player);
    
public:
    UFUNCTION(BlueprintCallable)
    float BP_GetMovieProgress(FGameplayTag Tag);
    
    UFUNCTION(BlueprintCallable)
    float BP_GetMovieDuration(FGameplayTag Tag);
    
protected:
    UFUNCTION(BlueprintCallable)
    void AkMarkerCallback(EAkCallbackType Type, UAkCallbackInfo* Info);
    
};

