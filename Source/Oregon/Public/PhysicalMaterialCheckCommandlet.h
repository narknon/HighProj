#pragma once
#include "CoreMinimal.h"
#include "Commandlets/Commandlet.h"
#include "PhysicalMaterialCheckCommandlet.generated.h"

UCLASS(Blueprintable, NonTransient)
class UPhysicalMaterialCheckCommandlet : public UCommandlet {
    GENERATED_BODY()
public:
    UPhysicalMaterialCheckCommandlet();
};

