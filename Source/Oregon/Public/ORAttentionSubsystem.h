#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "ORAttentionAudioData.h"
#include "ORAttentionSubsystem.generated.h"

class UAkComponent;
class UORAttentionComponent;

UCLASS(Blueprintable)
class OREGON_API UORAttentionSubsystem : public UTickableWorldSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UORAttentionComponent*> AttentionComps;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FORAttentionAudioData> AudioData;
    
public:
    UORAttentionSubsystem();
    UFUNCTION(BlueprintCallable)
    void UnregisterAudioComponent(UAkComponent* Component);
    
    UFUNCTION(BlueprintCallable)
    void RegisterAudioComponent(UAkComponent* Component, float ExtraRadius, bool bLowPriority);
    
};

