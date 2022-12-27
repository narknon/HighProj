#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ORDesignerSpotLight.generated.h"

UCLASS(Blueprintable)
class OREGON_API AORSpotLight : public AActor {
    GENERATED_BODY()
public:

};


UCLASS(Blueprintable)
class OREGON_API AORDesignerSpotLight : public AORSpotLight {
    GENERATED_BODY()
public:
    AORDesignerSpotLight();
};

