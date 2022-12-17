#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "Chaos/ChaosEngineInterface.h"
#include "ORAudioSettings.generated.h"

class UAkSwitchValue;
class UDataTable;

UCLASS(Blueprintable, DefaultConfig, NotPlaceable, Config=Squanch)
class OREGON_API UORAudioSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    TMap<TEnumAsByte<EPhysicalSurface>, TSoftObjectPtr<UAkSwitchValue>> SurfaceToSwitchValueMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UDataTable> AmbienceAudioSettings;
    
    UORAudioSettings();
};

