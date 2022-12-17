#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GameFramework/Actor.h"
#include "ORSlowTimeBubble.generated.h"

class UGameplayEffect;
class UORTriggerVolumeComponent;
class UParticleSystem;

UCLASS(Blueprintable)
class OREGON_API AORSlowTimeBubble : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UORTriggerVolumeComponent* TriggerVolumeComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayEffect> SlowCharacterEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* ImmuneVFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bImmediateUnslow;
    
    AORSlowTimeBubble();
    UFUNCTION(BlueprintCallable)
    void OnExitedVolume(AActor* SourceActor, int32 VolumeIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnEnteredVolume(AActor* SourceActor, int32 VolumeIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnActorStartSlow(AActor* SlowedActor);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnActorEndSlow(AActor* SlowedActor);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float GetBubbleRadius();
    
};

