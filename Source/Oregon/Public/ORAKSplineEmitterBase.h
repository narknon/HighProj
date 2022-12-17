#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ORAKSplineEmitterBase.generated.h"

class UAkComponent;

UCLASS(Blueprintable)
class OREGON_API AORAKSplineEmitterBase : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxAudioDistance;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UAkComponent*> CachedAKComponents;
    
public:
    AORAKSplineEmitterBase();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    int32 TriggerAudio(UAkComponent* Comp);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsActive();
    
};

