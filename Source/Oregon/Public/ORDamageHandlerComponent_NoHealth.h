#pragma once
#include "CoreMinimal.h"
#include "ORDamageHandlerComponent.h"
#include "ORDamageHandlerComponent_NoHealth.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class OREGON_API UORDamageHandlerComponent_NoHealth : public UORDamageHandlerComponent {
    GENERATED_BODY()
public:
    UORDamageHandlerComponent_NoHealth();
};

