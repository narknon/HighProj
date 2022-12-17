#pragma once
#include "CoreMinimal.h"
#include "GameplayEffectTypes.h"
#include "EORCharacterRagdollGEAutoRemovalPolicy.h"
#include "ORCharacterRagdollActiveGEDef.generated.h"

USTRUCT(BlueprintType)
struct FORCharacterRagdollActiveGEDef {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FActiveGameplayEffectHandle GameplayEffectHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EORCharacterRagdollGEAutoRemovalPolicy AutoRemovalPolicy;
    
    OREGON_API FORCharacterRagdollActiveGEDef();
};

