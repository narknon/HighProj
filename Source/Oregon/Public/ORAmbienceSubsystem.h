#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "ORStreamingPreloadInterface.h"
#include "ORAmbienceSubsystem.generated.h"

class AORAmbienceTriggerVolume;
class UDataTable;

UCLASS(Blueprintable)
class UORAmbienceSubsystem : public UWorldSubsystem, public IORStreamingPreloadInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AORAmbienceTriggerVolume*> TriggerVolumeStack;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* AmbienceSettings;
    
public:
    UORAmbienceSubsystem();
    
    // Fix for true pure virtual functions not being implemented
};

