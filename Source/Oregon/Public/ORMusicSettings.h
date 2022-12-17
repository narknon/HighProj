#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "ORMusicSettings.generated.h"

class UAkAudioEvent;
class UAkStateValue;

UCLASS(Blueprintable, DefaultConfig, NotPlaceable, Config=Squanch)
class OREGON_API UORMusicSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAkAudioEvent> StartMusic_AkEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAkAudioEvent> PauseMusic_AkEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAkAudioEvent> ResumeMusic_AkEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAkAudioEvent> StopMusic_AkEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAkStateValue> ExplorationMusicState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAkStateValue> CombatMusicState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAkStateValue> BossFightMusicState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAkAudioEvent> BossStinger_AkEvent;
    
    UORMusicSettings();
};

