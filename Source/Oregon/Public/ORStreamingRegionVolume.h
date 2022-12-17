#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EORStreamingRegionVolumeType.h"
#include "ORStreamingRegionVolume.generated.h"

class UORStreamingRegionVolumeComponent;

UCLASS(Blueprintable)
class OREGON_API AORStreamingRegionVolume : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EORStreamingRegionVolumeType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UORStreamingRegionVolumeComponent* Volume;
    
    AORStreamingRegionVolume();
    UFUNCTION(BlueprintCallable)
    void SetEnabled(bool bEnabled);
    
};

