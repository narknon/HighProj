#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "ORRespawnAreaVolumeSubsystem.generated.h"

class AORRespawnAreaVolume;

UCLASS(Blueprintable)
class OREGON_API UORRespawnAreaVolumeSubsystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AORRespawnAreaVolume*> Volumes;
    
    UORRespawnAreaVolumeSubsystem();
};

