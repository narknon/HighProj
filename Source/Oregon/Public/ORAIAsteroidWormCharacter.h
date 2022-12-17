#pragma once
#include "CoreMinimal.h"
#include "ORAIFaunaCharacter.h"
#include "ORAIAsteroidWormCharacter.generated.h"

UCLASS(Blueprintable)
class OREGON_API AORAIAsteroidWormCharacter : public AORAIFaunaCharacter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float KnockbackStrength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SensoryDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SensoryMemory;
    
    AORAIAsteroidWormCharacter();
};

