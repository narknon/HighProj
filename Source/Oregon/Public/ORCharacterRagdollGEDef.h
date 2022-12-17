#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "EORCharacterRagdollGEAddlPolicy.h"
#include "EORCharacterRagdollGEAutoRemovalPolicy.h"
#include "ORCharacterRagdollGEDef.generated.h"

class UGameplayEffect;

USTRUCT(BlueprintType)
struct FORCharacterRagdollGEDef {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayEffect> GameplayEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EORCharacterRagdollGEAddlPolicy AddPolicty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EORCharacterRagdollGEAutoRemovalPolicy AutoRemovalPolicy;
    
    OREGON_API FORCharacterRagdollGEDef();
};

