#pragma once
#include "CoreMinimal.h"
#include "SyncedMovieAudio.h"
#include "GameplayTagContainer.h"
#include "SyncedMovieData.generated.h"

class UBinkMediaPlayer;
class UDataTable;

USTRUCT(BlueprintType)
struct FSyncedMovieData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGameplayTag MovieTag;
    
    UPROPERTY(EditAnywhere, Transient)
    TWeakObjectPtr<UBinkMediaPlayer> CachedMediaPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FSyncedMovieAudio> CachedAudioLocations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UDataTable* LocalizationTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGameplayTag ParentMovie;
    
    OREGON_API FSyncedMovieData();
};

