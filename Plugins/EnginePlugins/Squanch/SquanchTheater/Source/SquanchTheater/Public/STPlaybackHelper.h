#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "STPlaybackHelper.generated.h"

class USceneComponent;
class USoundWave;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SQUANCHTHEATER_API USTPlaybackHelper : public UActorComponent {
    GENERATED_BODY()
public:
    USTPlaybackHelper();
    UFUNCTION(BlueprintCallable)
    void OnSceneComponentAttached(USceneComponent* ChildComponent);
    
    UFUNCTION(BlueprintCallable)
    void OnAudioPlaybackPercent(const USoundWave* SoundWave, const float PlaybackPercent);
    
};

