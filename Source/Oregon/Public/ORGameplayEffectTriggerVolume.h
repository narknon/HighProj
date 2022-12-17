#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ORTriggerVolume.h"
#include "ORGameplayEffectTriggerVolumeData.h"
#include "ORGameplayEffectTriggerVolume.generated.h"

class AActor;
class UGameplayEffect;

UCLASS(Blueprintable)
class OREGON_API AORGameplayEffectTriggerVolume : public AORTriggerVolume {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayEffect> GameplayEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UGameplayEffect>> GameplayEffects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GameplayEffectLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<AActor>> SupportedActorClasses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FORGameplayEffectTriggerVolumeData> ActiveEffects;
    
public:
    AORGameplayEffectTriggerVolume();
protected:
    UFUNCTION(BlueprintCallable)
    void RemoveEffects(AActor* Target);
    
    UFUNCTION(BlueprintCallable)
    void AddEffects(AActor* Target);
    
};

