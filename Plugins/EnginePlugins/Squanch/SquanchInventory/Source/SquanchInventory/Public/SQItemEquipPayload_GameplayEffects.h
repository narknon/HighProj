#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "SQItemEquipPayload.h"
#include "GameplayEffectTypes.h"
#include "SQItemEquipPayload_GameplayEffects.generated.h"

class UGameplayEffect;

UCLASS(Blueprintable)
class SQUANCHINVENTORY_API USQItemEquipPayload_GameplayEffects : public USQItemEquipPayload {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UGameplayEffect>> OwnerPassiveEffects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UGameplayEffect>> InstantUnequipEffects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FActiveGameplayEffectHandle> OwnerPassiveEffectHandles;
    
public:
    USQItemEquipPayload_GameplayEffects();
};

