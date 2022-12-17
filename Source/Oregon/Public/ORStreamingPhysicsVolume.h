#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ORStreamingPhysicsVolume.generated.h"

class UORStreamingPhysicsVolumeComponent;

UCLASS(Blueprintable)
class OREGON_API AORStreamingPhysicsVolume : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UORStreamingPhysicsVolumeComponent* Volume;
    
    AORStreamingPhysicsVolume();
};

