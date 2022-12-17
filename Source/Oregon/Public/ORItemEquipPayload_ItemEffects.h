#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "SQItemEquipPayload.h"
#include "GameplayTagContainer.h"
#include "GameplayEffectTypes.h"
#include "ORItemEquipPayload_ItemEffects.generated.h"

class UGameplayEffect;

UCLASS(Blueprintable)
class OREGON_API UORItemEquipPayload_ItemEffects : public USQItemEquipPayload {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag InventoryItemGameplayTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UGameplayEffect>> ItemPassiveEffects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FActiveGameplayEffectHandle> ItemPassiveEffectHandles;
    
public:
    UORItemEquipPayload_ItemEffects();
};

