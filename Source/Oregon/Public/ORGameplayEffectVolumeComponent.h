#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ORTriggerVolumeComponent.h"
#include "ORGameplayEffectTriggerVolumeComponentData.h"
#include "ORGameplayEffectVolumeComponent.generated.h"

class AActor;
class UGameplayEffect;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class OREGON_API UORGameplayEffectVolumeComponent : public UORTriggerVolumeComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayEffect> GameplayEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UGameplayEffect>> GameplayEffects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GameplayEffectLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<AActor>> SupportedActorClasses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDontApplyToPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FORGameplayEffectTriggerVolumeComponentData> ActiveEffects;
    
    UORGameplayEffectVolumeComponent();
    UFUNCTION(BlueprintCallable)
    void HandleLeft(AActor* Actor, int32 VolumeIndex);
    
    UFUNCTION(BlueprintCallable)
    void HandleEntered(AActor* Actor, int32 VolumeIndex);
    
};

