#pragma once
#include "CoreMinimal.h"
#include "ORItemEquipPayload_FiringOverride.h"
#include "GameplayTagContainer.h"
#include "ORItemEquipPayload_WeaponMod.generated.h"

UCLASS(Blueprintable)
class OREGON_API UORItemEquipPayload_WeaponMod : public UORItemEquipPayload_FiringOverride {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag ModType;
    
public:
    UORItemEquipPayload_WeaponMod();
};

