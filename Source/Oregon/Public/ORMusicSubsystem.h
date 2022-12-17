#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "ORStreamingPreloadInterface.h"
#include "ORMusicSubsystem.generated.h"

class UAkAudioEvent;
class UAkStateValue;
class AORMusicTriggerVolume;
class UORMusicSettings;

UCLASS(Blueprintable)
class OREGON_API UORMusicSubsystem : public UGameInstanceSubsystem, public IORStreamingPreloadInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UORMusicSettings* MusicSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AORMusicTriggerVolume*> TriggerVolumeStack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* StartMusicEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* StopMusicEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* BossStingerMusicEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAkStateValue* PreviousLevelState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAkStateValue* CurrentLevelState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAkStateValue* ExplorationState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAkStateValue* CombatState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAkStateValue> NextLevelFromLoad;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAkAudioEvent> NextMusicEventFromLoad;
    
public:
    UORMusicSubsystem();
    UFUNCTION(BlueprintCallable)
    void SwitchStates(UAkStateValue* StateValue);
    
    UFUNCTION(BlueprintCallable, Exec)
    void StopMusic();
    
    UFUNCTION(BlueprintCallable, Exec)
    void StopCombatMusic();
    
    UFUNCTION(BlueprintCallable, Exec)
    void StartMusic();
    
    UFUNCTION(BlueprintCallable)
    void ReturnToPreviousState();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ResumeMusic();
    
    UFUNCTION(BlueprintCallable)
    void PostMusicSystemEvent(UAkAudioEvent* AkEvent);
    
    UFUNCTION(BlueprintCallable, Exec)
    void PlayStingerBossDefeated();
    
    UFUNCTION(BlueprintCallable, Exec)
    void PlayCombatMusic();
    
    UFUNCTION(BlueprintCallable, Exec)
    void PlayBossCombatMusic();
    
    UFUNCTION(BlueprintCallable, Exec)
    void PlayBackgroundMusic();
    
    UFUNCTION(BlueprintCallable, Exec)
    void PauseMusic();
    
private:
    UFUNCTION(BlueprintCallable)
    void MusicLevelCompletedLoading();
    
    UFUNCTION(BlueprintCallable)
    void MusicEventCompletedLoading();
    
public:
    UFUNCTION(BlueprintCallable)
    void InitAfterGameMode();
    
    
    // Fix for true pure virtual functions not being implemented
};

