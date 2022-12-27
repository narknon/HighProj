#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ORDesignerPointLight.generated.h"

UCLASS(Blueprintable)
class OREGON_API AORPointLight : public AActor {
    GENERATED_BODY()
public:

};

UCLASS(Blueprintable)
class OREGON_API AORDesignerPointLight : public AORPointLight {
    GENERATED_BODY()
public:
    AORDesignerPointLight();
};

