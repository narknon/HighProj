#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "LoadMovieDataPinDelegate.h"
#include "ORLatentAction_LoadMovieData.generated.h"

class UObject;
class UAkAudioEvent;
class UBinkMediaPlayer;
class UORLatentAction_LoadMovieData;
class UMaterialInterface;

UCLASS(Blueprintable)
class OREGON_API UORLatentAction_LoadMovieData : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLoadMovieDataPin LoadCompleted;
    
public:
    UORLatentAction_LoadMovieData();
protected:
    UFUNCTION(BlueprintCallable)
    void Tick();
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObj"))
    static UORLatentAction_LoadMovieData* LoadMovieData(UObject* WorldContextObj, TSoftObjectPtr<UBinkMediaPlayer> BinkPlayerRef, TSoftObjectPtr<UMaterialInterface> ScreenMaterialRef, TArray<TSoftObjectPtr<UAkAudioEvent>> PlayEventRefs, TArray<TSoftObjectPtr<UAkAudioEvent>> PauseEventRefs, TArray<TSoftObjectPtr<UAkAudioEvent>> ResumeEventRefs, TArray<TSoftObjectPtr<UAkAudioEvent>> StopEventsRefs);
    
};

