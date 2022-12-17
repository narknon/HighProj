#pragma once
#include "CoreMinimal.h"
#include "STAkComponent.h"
#include "ORAkComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class OREGON_API UORAkComponent : public USTAkComponent {
    GENERATED_BODY()
public:
    UORAkComponent();
};

