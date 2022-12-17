#pragma once
#include "CoreMinimal.h"
#include "GameplayEffect.h"
#include "EApplicationType.h"
#include "ORGameplayEffect.generated.h"

UCLASS(Blueprintable)
class UORGameplayEffect : public UGameplayEffect {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EApplicationType> ApplicationType;
    
    UORGameplayEffect();
};

