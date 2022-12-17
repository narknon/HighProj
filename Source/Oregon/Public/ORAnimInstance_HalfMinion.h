#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "ORAnimInstance_HalfMinion.generated.h"

class AORCreatureWeaponItem;

UCLASS(Blueprintable, NonTransient)
class OREGON_API UORAnimInstance_HalfMinion : public UAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AORCreatureWeaponItem* CreatureWeaponItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MinionSlotIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsMinionLoaded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsMindControlMinion;
    
public:
    UORAnimInstance_HalfMinion();
};

