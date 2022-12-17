#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "ORAnimInstance_CreatureCartridge.generated.h"

class AORCreatureWeaponItem;

UCLASS(Blueprintable, NonTransient)
class OREGON_API UORAnimInstance_CreatureCartridge : public UAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AORCreatureWeaponItem* CreatureWeaponItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<bool> MinionSlotLoaded;
    
public:
    UORAnimInstance_CreatureCartridge();
};

