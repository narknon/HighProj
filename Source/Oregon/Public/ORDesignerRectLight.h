#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ORDesignerRectLight.generated.h"

UCLASS(Blueprintable)
class OREGON_API AORRectLight : public AActor {
    GENERATED_BODY()
public:

};

UCLASS(Blueprintable)
class OREGON_API AORDesignerRectLight : public AORRectLight {
    GENERATED_BODY()
public:
    AORDesignerRectLight();
};

