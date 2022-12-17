#pragma once
#include "CoreMinimal.h"
#include "SyncedMovieAudio.generated.h"

class AActor;
class UAkComponent;
class UAkAudioEvent;

USTRUCT(BlueprintType)
struct FSyncedMovieAudio {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, Transient)
    TWeakObjectPtr<AActor> CachedMovieSource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UAkAudioEvent*> CachedPlayEvents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UAkAudioEvent*> CachedPauseEvents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UAkAudioEvent*> CachedResumeEvents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UAkAudioEvent*> CachedStopEvents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<int32> CachedAudioIDs;
    
    UPROPERTY(EditAnywhere, Export, Transient)
    TWeakObjectPtr<UAkComponent> AkComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FString> CachedAudioNames;
    
    OREGON_API FSyncedMovieAudio();
};

