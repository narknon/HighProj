#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "OR_Garmantuous_ProjectileWaveContainer.h"
#include "GameplayTagContainer.h"
#include "EORGarmWeaponState.h"
#include "BTT_Garmantuous_ProjectileAttack.generated.h"

UCLASS(Blueprintable)
class OREGON_API UBTT_Garmantuous_ProjectileAttack : public UBTTaskNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag ModeType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName WeaponType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EORGarmWeaponState CannonState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FOR_Garmantuous_ProjectileWaveContainer> Waves;
    
    UBTT_Garmantuous_ProjectileAttack();
};

