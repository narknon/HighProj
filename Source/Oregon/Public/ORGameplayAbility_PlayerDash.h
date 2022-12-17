#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ORGameplayAbility.h"
#include "ORGameplayAbility_PlayerDash.generated.h"

class UGameplayEffect;

UCLASS(Blueprintable)
class OREGON_API UORGameplayAbility_PlayerDash : public UORGameplayAbility {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayEffect> GroundCooldown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayEffect> AirCooldown;
    
    UORGameplayAbility_PlayerDash();
};

