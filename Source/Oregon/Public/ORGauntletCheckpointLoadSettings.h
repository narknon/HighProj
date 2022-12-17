#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "GameplayTagContainer.h"
#include "ECheckpointTagOptions.h"
#include "EBoolSetOrToggleOptions.h"
#include "ORGauntletCheckpointLoadSettings.generated.h"

UCLASS(Blueprintable, DefaultConfig, NotPlaceable, Config=Squanch)
class OREGON_API UORGauntletCheckpointLoadSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, ECheckpointTagOptions> CheckpointsToLoad;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    float TimeAtEachCheckpoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    float YawRotationRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    EBoolSetOrToggleOptions CheatPlayerUndetectable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    EBoolSetOrToggleOptions CheatPlayerGodMode;
    
    UORGauntletCheckpointLoadSettings();
};

