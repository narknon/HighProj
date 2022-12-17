#pragma once
#include "CoreMinimal.h"
#include "Engine/PointLight.h"
#include "ORDesignerPointLight.generated.h"

UCLASS(Blueprintable)
class OREGON_API AORDesignerPointLight : public APointLight {
    GENERATED_BODY()
public:
    AORDesignerPointLight();
};

